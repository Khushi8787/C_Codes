#include<stdio.h>
int main(){
    int a,b;
    printf(" enter 1st number=");
    scanf("%d",&a);
    printf(" enter 2nd number =");
    scanf("%d", &b);

    a= a-b;
    b= b+a;
    a= b-a;
    printf(" after swapping a= %d\n",a);
    printf(" after swapping b= %d\n",b);
}