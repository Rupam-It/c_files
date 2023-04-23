// program for string 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{char *name[10];
 char n[20];
 for(int i=0; i<10; i++)
 { printf("Enter name%d: ",i+1);
   gets(n);
   name[i]=malloc(strlen(n));
   strcpy(name[i],n);
 }
 for(int i=0; i<10; i++)
 {
    printf("\n%s",name[i]);
 }
return 0; 
}