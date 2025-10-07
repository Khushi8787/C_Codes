#include<stdio.h>

int main(){
int arr[10], i;
int sum=0;
float avg;


printf(" enter the first ten number:");
for(i=0; i<10; i++){
    printf("enter the integers %d:" ,i+1);
   
scanf("%d",&arr[i]);
 sum+=arr[i];
 printf("%d element sum %d",i,sum);
}
avg = sum/10;

printf(" sum of 10 digit is %d", sum);
printf(" the avg of 10 digit is %f", avg);

 }
