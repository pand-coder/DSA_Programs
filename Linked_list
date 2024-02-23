#include <stdio.h>
#include <stdlib.h>

// Define the Node structure
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

// Function to insert a node at the beginning of the linked list
Node *insert_at_begin(struct Node *head, int data)
{
    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr->data = data;
    ptr->next = head;
    head = ptr;
    return head;
}

// Function to delete the first node of the linked list
Node *delete_first(struct Node *head)
{
    if (head == NULL)
        printf("List is already empty\n");
    else
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        temp = NULL;
    }
    return head;
}

// Function to traverse and count nodes in the linked list
void traverse_count_nodes(struct Node *head)
{
    int count = 0;
    if (head == NULL)
        printf("Linked list is empty\n");
    Node *ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    printf("Number of nodes: %d\n", count);
}

// Function to print data of the linked list
void print_data_of_list(struct Node *head)
{
    if (head == NULL)
        printf("Linked list is empty\n");
    Node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

// Function to insert a node at the end of the linked list
// Function to insert a node at the end of the linked list
void insert_at_end(struct Node *head, int data)
{
    if (head == NULL)
    {
        printf("Error: List is empty\n");
        return;
    }

    Node *ptr = head;
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = data;
    temp->next = NULL;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
}

// Function to delete the last node using 2 pointer method
Node* del_last(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is already empty!\n");
    }
    else if (head->next == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        Node *temp = head;
        Node *temp2 = head;
        while (temp->next != NULL)
        {
            temp2 = temp;
            temp = temp->next;
        }
        temp2->next = NULL;
        free(temp);
        temp = NULL;
    }
    return head;
}
int main()
{
    Node *head = NULL;
    int choice = 0, data;

    do
    {
        printf("Menu Program\n");
        printf("1. Insertion at head\n");
        printf("2. Insertion at tail\n");
        printf("3. Deletion at head\n");
        printf("4. Traversal through Linked list\n");
        printf("5. Print data of the list\n");
        printf("6. Exit\n");
        printf("Enter the choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data to insert at the beginning: ");
            scanf("%d", &data);
            head = insert_at_begin(head, data);
            break;

        case 2:
            printf("Enter data to insert at the end: ");
            scanf("%d", &data);
            insert_at_end(head, data);
            break;

        case 3:
            head = delete_first(head);
            break;

        case 4:
            traverse_count_nodes(head);
            break;

        case 5:
            print_data_of_list(head);
            break;

        case 6:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice\n");
            break;
        }
    } while (choice != 6);

    return 0;
}
