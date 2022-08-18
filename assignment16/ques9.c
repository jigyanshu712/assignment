#include<stdio.h>
int main(){
    int a[3][3],i,j,count=0;
    printf("enter the 9 elements of the array\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix is :\n");
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%2d",a[i][j]);
        }
        printf("\n");
    }
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(a[i][j]!=0){
                count++;
            }
        }
    }
    if(count<(9/2))
        printf("it is a sparse matrix");
        else
            printf("it is dense matrix");



return 0;
}
