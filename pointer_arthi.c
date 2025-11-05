#include<stdio.h>
int main()
{
    int a=10;
    int *p;
   p =&a;
   printf("%d\n",a);
   printf("%u\n", p);
   p= p+1;
   printf(" after adding one = %u",p);
}