#include<stdio.h>
#include<string.h>
int main(){
   /* char str1[20],str2[20];
    printf(" enter 1st value:");
   gets(str1);
    printf("enter the 2nd value :");
    gets(str2);                                     str compare
    if(strcmp(str1,str2)== 0){
        printf(" its equall");
    }else{
        printf(" it is not equal");
    }*/

    char str[20];
    printf("enter string:");
    gets(str);
    printf("entered string :%s",str);
    printf("\n reverse: %s",strrev(str));
    return 0;

}