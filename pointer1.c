#include<stdio.h>
int main(){
    int a= 10;
    int *p;
    *p =20;
    printf("%d\n",a);// done norally 
    printf("%d\n",*p);  // by pointer
}