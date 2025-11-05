#include<stdio.h>
int main(){
    int num;
    printf(" enter any number:");
    scanf("%d",&num);
    if(num >0){
        printf("%d is poistive\n",num);
    }else if(num <0){
        printf(" %d is negative\n",num);
    }else if(num =0){
        printf("%d is zero\n",num);
    }
    int a,b;
    printf(" enter 1st number:");
    scanf("%d",&a);
    printf(" enter 2nd number:");
    scanf("%d",&b);
    
    a = a-b;
    b = a+b;
    a = b-a;

    printf(" after swapping a=%d\n",a);
    printf(" after swapping b = %d\n",b);
}