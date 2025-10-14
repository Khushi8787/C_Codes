#include<stdio.h>
int main(){
   int a;
    int r;
    int og;
    int sum=0;
    printf(" enter any number:");
    scanf("%d",&a);
    og = a;
    for(a=1; a<=og; a++){
        r=a%10;
        sum+=r*r*r;
        a=a/10;
    }  
    if(sum == og){
        printf("armstrong no.");
    }else{
        printf(" not an armstrong no.");
    }
}