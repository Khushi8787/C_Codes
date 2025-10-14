#include<stdio.h>
int main(){
    int a;
    int r;
    int og;
    int sum=0;
    printf(" enter any number:");
    scanf("%d",&a);
    
    while(a!=0){
        r=a%10;
        sum+=r*r*r;
        a=a/10;
    }
    if(sum==a){
        printf(" armstrong no.");

    }else{
        printf(" not an armstrong no.");
    }
}