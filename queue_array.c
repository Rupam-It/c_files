// program to execute queue using array
#include<stdio.h>
#include<stdlib.h>
#define max 5
int front=-1,rear=-1; 
int arr[max];
// add element in queue 
void dequeue(int n)
{ if(front==-1 && rear==-1)
    {  front=0;
       arr[++rear]=n; 
       return;
    }
  else if(rear==max-1){
    printf("queue is full !!!\n");
    return ;
  }
  else 
     arr[++rear]=n;
}

//delete element from queue
void enqueue()
{  if(front>rear)
    {
        printf("queue is already empty!!\n");
    }
    front ++;
}

// disply array 
void dispaly()
{
    for(int i=front; i<=rear; i++ )
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{ dequeue(0);
  dequeue(1);
  dequeue(2); 
  dequeue(3);
  dequeue(4);
  dequeue(5);
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
  
return 0;
}