#include<stdio.h>
double mult(float,double);
int main(){
    double sum;
    sum= mult(40.5,3.67);
    printf(" result is:%lf\n",sum );

}
double mult(float a,double b){
    return a*b;
}