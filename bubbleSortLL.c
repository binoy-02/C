//Write a program to sort a linked list of names using bubble sort.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char name[50];
    struct Node* next;
};

void swap(struct Node* a, struct Node* b) {
    char temp[50];
    strcpy(temp, a->name);
    strcpy(a->name, b->name);
    strcpy(b->name, temp);
}

void bubbleSort(struct Node* start) {
    int swapped;
    struct Node* ptr1;
    struct Node* lptr = NULL;

    // Check for empty list
    if (start == NULL)
        return;

    do {
        swapped = 0;
        ptr1 = start;

        while (ptr1->next != lptr) {
            if (strcmp(ptr1->name, ptr1->next->name) > 0) {
                swap(ptr1, ptr1->next);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
}

void append(struct Node** head_ref, char new_name[50]) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    strcpy(new_node->name, new_name);
    new_node->next = NULL;


    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    struct Node* last = *head_ref;
    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
}

void display(struct Node* node) {
    while (node != NULL) {
        printf("%s\n", node->name);
        node = node->next;
    }
}

int main() {
    struct Node* head = NULL;
    int n, i;
    char name[50];

    printf("Enter the number of names: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", name);
        append(&head, name);
    }

    printf("Names before sorting:\n");
    display(head);

    bubbleSort(head);

    printf("\nNames after sorting:\n");
    display(head);

    return 0;
}