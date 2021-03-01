#include <stdio.h> 
#define MAX_SIZE 100
#define MAX_CHARS 255 
int main()
{
	char str[MAX_SIZE];
	int freq[MAX_CHARS];
	int i = 0,max;
	int ascii;
	gets(str); 
	for(i=0; i<MAX_CHARS; i++) { freq[i] = 0;
} 
  i=0;
  while(str[i] != '\0')
  {
  	ascii = (int)str[i];
  	freq[ascii] += 1; i++; } 
  	max = 0;
  	for(i=0; i<MAX_CHARS; i++)
  	{
  		if(freq[i] > freq[max]) max = i;
  	}
  		printf("%c", max);
  		return 0;
  }
