#include<stdio.h>
int main(){
  int n;
       // it starts with 0 so baiscally 0=1, 1=2, 2=3, ...
 
 int a[5]={1,2,3,4,5};
 printf("%d\n",a[4]);
 a[3]= 30;
 for( n=0; n<=4; n++){
    printf(" %d\t", a[n]);
 }

}