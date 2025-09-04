#include<stdio.h>
int main(){

    int a,b;
    printf(" enter a :");
    scanf("%d", &a);
    printf(" enter b:");
    scanf("%d", &b);

    a= a - b;
    b= a + b;
    a= b - a;

    printf(" after swapping, a= %d \n", a);
     printf(" after swapping, b= %d \n", b);
}