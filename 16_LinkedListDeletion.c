#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *newNode(int data)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

void display(Node *ptr)
{
    if (ptr == NULL)
    {
        printf("Empty\n");
        return;
    }

    Node *temp = (Node *)malloc(sizeof(Node));
    temp = ptr;
    while (temp->next != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("%d\n", temp->data);
}

void insertStart(Node **head, int data)
{
    Node *ptr = newNode(data);
    ptr->next = *head;
    *head = ptr;
}

void insertAt(Node **head, int data, int index)
{
    Node *ptr = newNode(data);
    Node *temp = (Node *)malloc(sizeof(Node));
    temp = *head;
    if (index == 0 || *head == NULL)
    {
        insertStart(head, data);
        return;
    }

    for (int i = 0; i < index - 1; i++)
    {
        if (temp->next == NULL)
            break;

        temp = temp->next;
    }
    ptr->next = temp->next;
    temp->next = ptr;
}

void insertEnd(Node **head, int data)
{
    Node *ptr = newNode(data);
    Node *temp = (Node *)malloc(sizeof(Node));
    temp = *head;
    if (*head == NULL)
    {
        insertStart(head, data);
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = ptr;
}

void insertAfter(Node *ptr, int data)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = data;
    temp->next = ptr->next;
    ptr->next = temp;
}

void deleteStart(Node **head)
{
    Node *dNode = newNode(0);
    dNode = *head;
    *head = dNode->next;
    free(dNode);
}

void deleteEnd(Node **head)
{
    Node *temp = newNode(0);
    Node *last = newNode(0);
    last = *head;
    if (last->next == NULL)
    {
        free(last);
        *head = NULL;
        return;
    }

    temp = last->next;
    while (temp->next != NULL)
    {
        temp = temp->next;
        last = last->next;
    }
    last->next = NULL;
    free(temp);
}

void deleteAt(Node **head, int index)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp = *head;
    if (*head == NULL)
    {
        return;
    }
    else if (index == 0)
    {
        *head = temp->next;
        free(temp);
        return;
    }
    Node *last = newNode(0);
    last = *head;
    temp = last->next;

    for (int i = 0; i < index - 1; i++)
    {
        if (temp->next == NULL)
            break;

        temp = temp->next;
        last = last->next;
    }
    last->next = temp->next;
    free(temp);
}

void deleteElmt(Node **head, int elmt)
{
    Node *temp = newNode(0);
    Node *last = newNode(0);
    last = *head;
    if (last->data == elmt)
    {
        *head = last->next;
        free(last);
        return;
    }

    temp = last->next;
    while (temp->data != elmt && temp->next != NULL)
    {
        temp = temp->next;
        last = last->next;
    }
    if (temp->data == elmt)
    {
        last->next = temp->next;
        free(temp);
    }
}

int main()
{
    Node *head = newNode(12);
    insertEnd(&head, 13);
    insertEnd(&head, 14);
    insertEnd(&head, 15);

    display(head);

    deleteElmt(&head, 14);
    deleteElmt(&head, 13);
    // deleteElmt(&head, 15);
    deleteElmt(&head, 12);
    // deleteAt(&head,0);
    // deleteAt(&head,2);

    display(head);
    return 0;
}