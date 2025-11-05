#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter 1st no.=");
    scanf("%d",&a);
    printf("enter 2nd no.=");
    scanf("%d",&b);
    printf(" enter 3rd no.=");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("%d is the largest",a);
    }else if(b>a && b>c){
        printf("%d is the largest ",b);
    }else if(c>a && c>b){
        printf(" %d is the largest",c);
    }
}