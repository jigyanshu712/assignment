#include<stdio.h>
int main(){
     int a[3][3],i,j,cs[3],cr[3];
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
            cr[i]=0;
        for(j=0;j<3;j++){
            cr[i]=cr[i]+a[i][j];

        }
     }

      for(i=0;i<3;i++){
            cs[i]=0;
        for(j=0;j<3;j++){
            cs[i]=cs[i]+a[j][i];

        }
     }


     printf(" the sum of row and column in the given array\n");
     for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("%2d",a[i][j]);
            }
            printf("%4d",cr[i]);
            printf("\n");

     }
     printf("\n");
     for(j=0;j<3;j++){
        printf("%2d",cs[j]);
     }
return 0;
}
