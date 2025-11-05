#include<stdio.h>
int main(){
    int a;
    int *p;
    *p=20; 
    printf("%u\n",a);// done norally 
    
    printf("%d\n",*p);  // by pointer
}