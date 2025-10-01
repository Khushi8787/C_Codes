#include<stdio.h>
int change(int ,int);

int main(){
    int a=5 ,b=6;
    printf(" actual value of a and b = %d %d\n",a,b);
    change(a,b);
    printf(" after the function  call value= %d %d\n",a,b);



}
int change(int x, int y){
    x++;
    y++;
    printf("formal value =%d %d\n",x,y);
}