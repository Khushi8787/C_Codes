#include<stdio.h>
int main(){
    int num;
    int rem;
    int sum=0;
    int og;
    printf(" enter any number:");
    scanf("%d",&num);
    og= num;
    do{
        rem= num%10;
        sum+= rem*rem*rem;
        num=num/10;
    }while(num=!0);
     if(sum==og){
      printf("it is a armstrong number");
    }else{
        printf(" it's not an armstrong");
    }
}