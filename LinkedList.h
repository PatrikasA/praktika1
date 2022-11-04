#ifndef LINKEDLIST
#define LINKEDLIST

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
    char name[20];
    char surname[20];
    char phone[15];
    char email[50];
    struct Node* next;
};

void init_list(struct Node **first, struct Node **last);
void display(struct Node* head, struct Node* tail, int number);
void displayNode(struct Node* node);
void addToEnd(struct Node* first, struct Node *last, struct Node *data);
void insertAtPosition(struct Node* head, struct Node* tail, struct Node* data, int position);
void removeFromTail(struct Node* head);
void removeFromHead(struct Node* head);
void removeAtPosition(struct Node* head, struct Node* tail, int position);
struct Node* findByEmail(struct Node* head, struct Node* tail, char* email);
struct Node* findByName(struct Node* head, struct Node* tail, char* name);
struct Node* findBySurname(struct Node* head, struct Node* tail, char* surname);
struct Node* findByPhone(struct Node* head, struct Node* tail, char* phone);
struct Node* findByIndex(struct Node* head, struct Node* tail, int index);
void deleteWholeList(struct Node* head, struct Node* tail);

#endif