#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next; // cant use alias here
} Node;

void display(Node *ptr)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp = ptr;
    while (temp->next != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("%d\n", temp->data);
}

int main()
{
    Node *head = (Node *)malloc(sizeof(Node));
    Node *fst = (Node *)malloc(sizeof(Node));
    Node *snd = (Node *)malloc(sizeof(Node));
    Node *trd = (Node *)malloc(sizeof(Node));
    head->data = 12;
    head->next = fst;

    fst->data = 32;
    fst->next = snd;

    snd->data = 43;
    snd->next = trd;

    trd->data = 56;
    trd->next = NULL;
    display(head);
    return 0;
}