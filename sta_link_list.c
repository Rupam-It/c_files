//implementation stack using array 
#include<stdio.h>
#include<stdlib.h>
struct node 
{  int data; 
  struct node * link; 

};
 struct node * top=NULL;
 //push element in stack 
void push(int val)
{  struct node * new_node= malloc(sizeof(struct node));
    new_node->data=val;
    new_node->link=top; 
    top=new_node;
} 

//pop element in stack 
void pop()
{  if(top==NULL)
   {  printf("Stack is empty: ");
      return ; 

   }
struct node * temp; 
temp=top; 
if(top->link==NULL)
{
    free(temp);
    free(top);
}
else{
    top=top->link;
    free(temp);
}

}

// display stack
void display()
{ struct node * ptr=NULL;
  ptr=top; 
  while(ptr!=NULL)
  {
    printf("%d ",ptr->data);
    ptr=ptr->link;
  }
 printf("\n");
}

int main()
{  push(2);
 display();
   push(5);
    display();
   push(7);
    display();
   push(9);
   display();
   pop();
   display();
    pop();
   display();
return 0; 
}    