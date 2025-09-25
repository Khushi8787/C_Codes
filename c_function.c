#include<stdio.h>
// function declartion
int add(int , int);

int main(){
    int sum;

    //calling the add function

   sum= add(50,10);     // in int sum is declare 
    printf(" result of given integer is=%d\n",sum);
   
}
//function defination 
int add(int a,int b){
   return a+b;
}
// agar uppar add declare kiya so niche bhi