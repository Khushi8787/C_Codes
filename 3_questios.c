#include<stdio.h>
int main(){
    // 1) "hello, world!" program

   printf(" \n hello, world!\n");

 // 2) program to add two integers

 int c,d ;
 printf(" enter 1st no. :");
 scanf("%d",&c);
 printf(" enter second no.:");
 scanf(" %d",&d);

 printf(" %d + %d =%d\n",c,d,c+d);

 // 3) program to multiply two floating-point numbers

 double a,b;
  printf(" enter 1st no. :");
 scanf("%lf",&a);
  printf(" enter 2nd no. :");
 scanf("%lf",&b);

 printf("%lf * %lf =%lf",a,b,a*b);
 
}