#include<stdio.h>
int main()
{
    const char * fun(); 
    const char * p; 
    p=fun();
    printf("%s",p);
    return 0; 
}
const char * fun()
{
    return "rupam";
}