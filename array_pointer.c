#include<stdio.h>
int main()
{
    int a[3]={1,2,3};
    int *p;
    p=&a[3];
    printf(" address of array= %u\n",*p);
    p=p+1;
    printf(" address after adding one = %u\n",*p);
    p=p+3;
     printf(" address after adding three = %u\n",*p);
}