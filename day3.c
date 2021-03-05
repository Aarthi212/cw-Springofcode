#include <limits.h>

#include <stdio.h>

#include <stdlib.h>

#define NO_OF_CHARS 256
struct countIndex 
{ 
    int count; 

    int index; 
};
struct countIndex* getCharCountArray(char* str) 
{

 struct countIndex* count = (struct countIndex*)calloc( 

 sizeof(struct countIndex), NO_OF_CHARS); 

 int i;

 for (i = 0; *(str + i); i++)
   { 

      (count[*(str + i)].count)++; 

       if (count[*(str + i)].count == 1) 

       count[*(str + i)].index = i; 
    } 
    return count; 
}
int firstNonRepeating(char* str) 
{
 struct countIndex* count =  
	 getCharCountArray(str); 

 int result = INT_MAX, i; 
 
 for (i = 0; i < NO_OF_CHARS; i++)
  { 
        if (count[i].count == 1 

            && result > count[i].index) 

            result = count[i].index; 

    } 

    free(count); 

    return result; 
}
int main() 
{

    char str[] = "codewarriors"; 

    int index = firstNonRepeating(str); 

    if (index == INT_MAX) 

        printf("Either all characters are" 

               " repeating or string is empty"); 

    else 

        printf("non-repeating character" 

               " is %c", 

               str[index]); 

    getchar(); 

    return 0; 

}

