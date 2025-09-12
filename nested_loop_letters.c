#include<stdio.h>
int main(){
    int i =1;
    int j =1;
    char letter = 'a';
    while(i<= 7){
        j= 1;
        while(j<= i){
            printf("%c ",letter);
            letter++;
            j++;
        }
        printf("\n");
        i++;
    }
}