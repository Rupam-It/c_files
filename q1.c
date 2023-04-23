// 31(2)
#include<stdio.h>
int main()
{
    char c,*cc;
    int i;
    long l;
    float f; 
    c='z';
    i=15; 
    l=77;
    f=3.14; 
    cc=&c; 
    printf("\nc=%C cc=%u",*cc,cc);
    cc=&i; 
    printf("\ni=%d cc=%u",*cc,cc);
    cc=&l;
    printf("\nl=%ld cc=%u",*cc,cc);
    cc=&f;
    printf("\nf=%f cc=%u",*cc,cc);
    return 0; 
}