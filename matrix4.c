#include<stdio.h>
int main(){
    int i,j;
    int a[2][5]= {(1,2,9,8,6), (4,5,6,3,5)};
    for(i= 0; i<2; i++){
        for(j=0 ; j<3; j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
// over here 2 s no. of row and 3 is the no. of coloum