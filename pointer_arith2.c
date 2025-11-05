#include<stdio.h>
int main(){
   int num;
    int *p;
    p=&num;
    printf(" ente any number:");
    scanf("%d",&num);

    printf(" the give number =%d\n",num);
    printf("address of num = %u\n",p);
    p= p+3;
    printf("after adding three= %u\n",p);
    p= p-4;
     printf("after subtracting four = %u\n",p);
     
     //while(printf("hello khushi")){}
    }