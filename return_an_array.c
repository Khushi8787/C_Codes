#include<stdio.h>
void getarray(int a[]){
    printf(" elements of array are:\n");
    
        for(int i= 1; i<5; i++){
            printf("%d",a[i]);
        }
    
}
int main(){
    int a[5]={23,56,26,78,51};
    getarray(a);

}