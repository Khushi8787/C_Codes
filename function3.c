#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    printf("enter string:");
    gets(str);
    printf(" string is:%s",str);
    printf("\n lower string:%s",strlwr(str));
}