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

int main()
{
    Node *head = newNode(12);
    Node *fst = newNode(13);
    Node *snd = newNode(14);
    Node *trd = newNode(15);

    head->next = fst;
    fst->next = snd;
    snd->next = trd;
    trd->next = NULL;

    display(head);

    // head = NULL;
    // insertStart(&head, 1);
    insertAt(&head, 89, 5);
    // insertAt(&head, 9, 0);
    // insertEnd(&head, 8);
    // insertAfter(snd,99);

    display(head);
    return 0;
}