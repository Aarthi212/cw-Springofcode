#include <bits/stdc++.h>

using namespace std; 
struct Node { 

    int data; 

    struct Node* next; 

};
void push(struct Node** head_ref, int data) 

{

    struct Node* ptr1 

        = (struct Node*)malloc( 

            sizeof(struct Node)); 

    struct Node* temp = *head_ref; 

    ptr1->data = data; 

    ptr1->next = *head_ref; 

    if (*head_ref != NULL) { 

        while (temp->next != *head_ref) 

            temp = temp->next; 

 

        temp->next = ptr1; 

    } 

    else 

        ptr1->next = ptr1; 

 

    *head_ref = ptr1; 

}

void deleteNode(Node* head_ref, Node* del) 

{

    struct Node* temp = head_ref; 

    if (head_ref == del) 

        head_ref = del->next; 

    while (temp->next != del) { 

        temp = temp->next; 

    } 

    temp->next = del->next;

    free(del); 

 

    return; 

}

int largestElement(struct Node* head_ref) 

{

    struct Node* current; 
    current = head_ref; 
    int maxEle = INT_MIN; 

    do { 

        if (current->data > maxEle) { 

            maxEle = current->data; 

        } 

 

        current = current->next; 

    } while (current != head_ref); 

 

    return maxEle; 

}

void createHash(set<int>& hash, 

                int maxElement) 

{

    int prev = 0, curr = 1; 

    hash.insert(prev); 

    hash.insert(curr); 

    while (curr <= maxElement) { 

        int temp = curr + prev; 

        hash.insert(temp); 

        prev = curr; 

        curr = temp; 

    } 

}

void deleteFibonacciNodes(Node* head) 

{
    int maxEle = largestElement(head); 

    set<int> hash; 

    createHash(hash, maxEle); 

 

    struct Node* ptr = head; 

 

    struct Node* next; 

    do { 

        if (hash.find(ptr->data) 

            != hash.end()) 

            deleteNode(head, ptr); 

        next = ptr->next; 

        ptr = next; 

 

    } while (ptr != head); 

}

void printList(struct Node* head) 

{

    struct Node* temp = head; 

    if (head != NULL) { 

        do { 

            printf("%d ", temp->data); 

            temp = temp->next; 

        } while (temp != head); 

    } 

}

int main() 

{

    struct Node* head = NULL; 

    push(&head, 5); 

    push(&head, 11); 

    push(&head, 16); 

    push(&head, 21); 

    push(&head, 17); 

    push(&head, 10); 

 

    deleteFibonacciNodes(head); 

 

    printList(head); 

 

    return 0; 

}

