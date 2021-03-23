#include <bits/stdc++.h> 

using namespace std; 

struct Node { 

    int data; 

    struct Node* next; 

}; 

void sumProduct(struct Node* head, int key) 

{ 

    struct Node* current = head; 

    int sum = 0, product = 1; 

    if (head == NULL) { 

        printf("\nDisplay List is empty\n"); 

        return; 

    } 
    else { 

        do { 
            if ((current->data) % key == 0) { 

                sum += current->data; 

                product *= current->data; 

            } 

  

            current = current->next; 

        } while (current != head); 

    } 

  

    cout << "Sum = " << sum << ", Product = " << product; 

} 

void displayList(struct Node* head) 

{ 

    struct Node* current = head; 

    if (head == NULL) { 

        printf("\nDisplay List is empty\n"); 

        return; 

    } 
    else { 

        do { 

            printf("%d ", current->data); 

            current = current->next; 

        } while (current != head); 

    } 

} 

void InsertNode(struct Node** head, int data) 

{ 

    struct Node* current = *head; 

    struct Node* newNode = new Node; 

    if (!newNode) { 

        printf("\nMemory Error\n"); 

        return; 

    } 

    newNode->data = data; 

    if (*head == NULL) { 

        newNode->next = newNode; 

        *head = newNode; 

        return; 

    } 
    else { 

        while (current->next != *head) { 

            current = current->next; 

        } 

        newNode->next = *head; 

        current->next = newNode; 

    } 

} 

int main() 

{ 

    struct Node* head = NULL; 

    InsertNode(&head, 5); 

    InsertNode(&head, 6); 

    InsertNode(&head, 7); 

    InsertNode(&head, 8); 

    InsertNode(&head, 9); 

    InsertNode(&head, 10); 

    InsertNode(&head, 11); 

    InsertNode(&head, 11); 

  

    cout << "Initial List: "; 

    displayList(head); 

  

    cout << endl; 

    sumProduct(head, 11); 

  

    return 0; 

} 

