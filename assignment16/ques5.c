
#include<stdio.h>
int main(){
int a[3][3],i,j,sum=0,m=3;
printf("enter the element in matrix 1\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("the given matrix is :\n ");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%2d",a[i][j]);
    }
    printf("\n");
}
for(i=0;i<3;i++){
        m=m-1;
    for(j=0;j<3;j++){
        if(m==j){
            sum=sum+a[i][j];
        }
    }
}
printf("the sum of left diagonal is :");
printf("%d",sum);



return 0;
}
