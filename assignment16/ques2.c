#include<stdio.h>
int main(){
    int a[3][3],b[3][3],c[3][3],i,j,k,sum;
    printf("enter the 9 elements of the first matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the 9 elements of the second matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
        printf(" the first matrix is :\n");
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%2d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

        printf("matrix is :\n");
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%2d",b[i][j]);
        }
        printf("\n");
    }



     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
                sum=0;
        for(k=0;k<3;k++){
            sum=sum+a[i][k]*b[k][j];
        }
        c[i][j]=sum;

        }

    }
       printf("the multiplication of two matrix\n");
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%4d",c[i][j]);
        }
        printf("\n");
    }


return 0;
}

