#include<stdio.h>
void display(int *arr, int n)
{  
  for (int i=0; i<n; i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}

int main()
{   int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n; i++)
    {
      scanf("%d",&a[i]);
    }
      int j=n-1;
      int p=a[n-1];
      for(;j>0;j--)
      {   if(a[j-1]>p)
        {  
          a[j]=a[j-1];
          display(a,n);
        }

        else if(a[j-1]<p)
        {
            a[j]=p;
            display(a,n);
            break;
        }

        else {
             display(a,n);
             break;
        }

      }
      if(a[0]>p)
      {
        a[0]=p;
        display(a,n);
      }
      return 0; 
}