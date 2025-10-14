#include<stdio.h>
int main(){
    int num;
    int rem; 
    int sum=0;
    int og;
     
     printf("enter any number:");
     scanf("%d",&num);
     og= num;
    while(num!=0){
        rem=num%10;            // 153%10= 3
        sum+= rem*rem*rem;     // 3*3*3 = 27; 27+  15%10(remaing of 153)
        num= num/10;          //  it gave 5 as a rem so 5*5*5= 125 ; 27+125= 152 ; again the process repeats  
    }
    if(sum==num){
        printf(" the given number is armstrong\n");
    } else{
        printf(" the given no. isn't an armstrong");
        
    }
}

// wht arestrongs are:- 153= 1^3+5^3+3^3= 153
