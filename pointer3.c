#include<stdio.h>
int main(){
    int a= 10;
     int num;
    int *p= &num;
    printf("enter any value");
    scanf("%d",&num );
    printf("the value of number is %x\n",*p);
    printf("the value of first no.: %d\n",a);
    }