#include <stdio.h>

#include <stdlib.h>
struct node

{

    int data;

    struct node *next;

}; 

void mergeAtAlternatePos(struct node *p, struct node *q)

{

     struct node *first = p, *sec = q;

     struct node *first_next, *sec_next;
     while (first != NULL && sec != NULL)

     {

         first_next = first->next;

         sec_next = sec->next;

  

         sec->next = first_next; 

         first->next = sec;

  

         first = first_next;

         sec = sec_next;

    }

    *q = sec;

}

