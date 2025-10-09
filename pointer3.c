#include<stdio.h>
int main(){
     int num;
    int *p= &num;
    printf("enter any value");
    scanf("%d",&num );
    printf("the value of number is %x\n",*p);
    ;

}