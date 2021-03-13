#include <stdio.h> 
struct Node
 {    
 int data;    
 struct Node* next;
 };
 Node* insertNode(int key) 
 { 
 	Node* temp = new Node;
 	temp->data = key;
 	temp->next = NULL;
 	return temp;
  }
void tailRecRevese(Node* current, Node* previous, Node** head)
  {
  	 if (!current->next)
  	 {  
  	   *head = current;
  	  current->next = previous;
  	  return;
  	 }
 Node* next = current->next;
 current->next = previous;      tailRecRevese(next, current, head); 
 }
void tailRecReveseLL(Node** head)
 { 
   if (!head)
  return;  
   tailRecRevese(*head, NULL, head); 
 }
void printLinkedList(Node* head)
  {  
  	 while (head != NULL)
  	 {       
  	  	printf("%d ", head->data);
  	  	head = head->next;   
  	  }    
  	 
  	  printf("\n"); 
  } 
  int main()
  {
  Node* head1 = insertNode(7);
  head1->next = insertNode(1);    head1->next->next = insertNode(2);    head1->next->next->next = insertNode(1);   printf("Linked list : \t");    printLinkedList(head1);    tailRecReveseLL(&head1);   
 printf("Reversed linked list : \t");    printLinkedList(head1);    
 return 0; 
 }