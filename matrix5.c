#include<stdio.h>
int main(){
int i,j;
    int a[2][3]={(1,2,3), (4,5,6)};
    for(i=0; i<3; i++){
        for(j=0; j<3 ; j++){
            printf("a[%d][%d]:\t",i,j);
            scanf("%d",&a[i][j]);
           
        } 
        printf("\n");
    }

}
