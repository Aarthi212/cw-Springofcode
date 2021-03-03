#include<stdio.h>

#include<string.h>

int main()

{

char string[]="big black bit a big black dog on his big black nose";

char words[100][100];

int i=0,j=0,k,length,count;

for(k=0;string[k]!='\0';k++)

{

if (string[k]!=' ' && string[k]!='\0')

{

words[i][j++] = tolower(string[k]);

}

else

{

words[i][j]='\0';

i++;

j=0;

}

}

length=i+1;

for(i=0;i<length;i++)

{

count=1;

for(j=i+1;j<length;j++)

if(strcmp(words[i],words[j])==0 && (strcmp(words[j],"0")!=0))

{

count++;

strcpy(words[j],"0");

}

}

if(count>1)

printf("%s",words[i]);

}

return 0;

}

