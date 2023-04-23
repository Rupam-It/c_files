// program to execute queue using link list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data ; 
    struct node * link; 
};
struct node * head =NULL;
struct node * rear =NULL;
  

// add element in queue
void dequeue(int n)
{ struct node * new_node=malloc(sizeof(struct node));
    new_node->data=n; 
    new_node->link=NULL;
    if(rear==NULL)
    {rear=new_node;
      head=rear;
    }
   else 
     {rear->link=new_node; 
       rear=rear->link;
     }
}
// delete element from queue 
void enqueue()
{   if(head==NULL)
    { 
        printf("queue is already empty");
        return ;
    }
     struct node * temp; 
     temp=head; 
     head=head->link;
     free(temp);      
}
//displaying list
void dispaly()
{  struct node * temp=NULL;
   temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->link;
    }
    printf("\n");
}


int main()
{
    dequeue(0);
  dequeue(1);
  dequeue(2); 
  dequeue(3);
  dequeue(4);
  //dequeue(5);
  //dequeue(6);
  //dequeue(7);
 // dequeue(8);
 // dequeue(9);
 // dequeue(10);
  dispaly();
  enqueue();
  dispaly();
  enqueue();
  dispaly();
  enqueue();
  dispaly();
  enqueue();
  dispaly();
  enqueue();
  dispaly();
  /*enqueue();
  dispaly();
  enqueue();
  dispaly();
  enqueue();
  dispaly();
  enqueue();
  dispaly();
  enqueue();
  dispaly();
  enqueue();
  dispaly();
  enqueue();
  dispaly();
printf("Have a nice day!"); */
 return 0;
}