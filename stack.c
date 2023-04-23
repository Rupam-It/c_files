// stack using array 
#include<stdio.h>
int top=-1; 
int size=5;
int arr[5];

void push(int n)
{ if(top==(size -1))
        {printf("Sorry stack is full !!!\n");
        return ; 
  }
  top++;
  arr[top]=n; 
}
void pop()
{  if(top==-1){
        printf("STack is empty\n");
        return ;
        }
        printf("%d is deleted!\n",arr[top]);
    top--;

}
void display()
{ printf("\ndisplay\n");
     if(top<=-1){
        printf("STack is empty\n");
        return ;
        }
    int i=0; 
    while(i<=top){
        printf("%d ",arr[i]);
        i++;
    }
printf("\n");
}
int main()
{ push(2);
push(2);
push(2);
push(3);
push(2);
push(4);
push(5);
display();
pop();
pop();
pop();
pop();
pop();
pop();
pop();
display();

return 0; 
}
