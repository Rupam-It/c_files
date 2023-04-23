// executing polinomial using link list
#include<stdio.h>
#include<stdlib.h>
struct poli
{
    int coff;
    int pow;
    struct poli * link; 
};
struct poli * createnode(struct poli * head,int n)
{  head=malloc(sizeof(struct poli));
     struct poli * temp; 
    temp=head;
    printf("\nuser are advised to maintain order(low to high || high to low)\n");
    printf("Enter the 1st cofficient: ");
    scanf("%d",&temp->coff);
    printf("     Enter the 1st power: ");
    scanf("%d",&temp->pow);
    temp->link=NULL ;
    struct poli * current;
    for(int i=2; i<=n; i++)
    {  current=malloc(sizeof(struct poli));
       printf("Enter the %dth  cofficient: ",i);
       scanf("%d",&current->coff);
       printf("      Enter the %dth power: ",i);
       scanf("%d",&current->pow);
       current->link=NULL;
       temp->link=current;
       temp=temp->link;
    }
    return head;
}
// display nodes 
void display(struct poli * head)
{  struct poli * ptr;
ptr=head;
while(ptr->link!=NULL)
{   if(ptr->coff==0)
            printf("");
    else if(ptr->pow==0)
            printf("%d + ",ptr->coff);
else if(ptr->pow==1)
            printf("%dx + ",ptr->coff);
    else 
     printf("%dx^%d + ",ptr->coff,ptr->pow);
     ptr=ptr->link;
}
if(ptr->coff==0)
            printf("");
    else if(ptr->pow==0)
            printf("%d",ptr->coff);
    else if(ptr->pow==1)
            printf("%dx  ",ptr->coff);
    else 
     printf("%dx^%d",ptr->coff,ptr->pow);
     
}

int main()
{struct poli * head=NULL ;
int n;
printf("Enter size of polinomial : ");
    scanf("%d",&n);
    head=createnode(head,n);  
    display(head);
return 0; 
}