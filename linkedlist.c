#include <stdio.h>
#include <stdlib.h>

// Structure for a node
struct Node {
    int data;
    struct Node *next;
};

// Function to traverse the linked list
void traverse(struct Node *head) {
    if (head == NULL) {
        printf("Linked List is empty.\n");
        return;
    }

    printf("Linked List: ");
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Function to insert a node at the beginning
struct Node* insertBegin(struct Node *head, int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return head;
    }

    newNode->data = value;
    newNode->next = head;

    return newNode;
}

int main() {
    struct Node *head = NULL;

    // Insert elements at the beginning
    head = insertBegin(head, 30);
    head = insertBegin(head, 20);
    head = insertBegin(head, 10);

    // Display the linked list
    traverse(head);

    return 0;
}