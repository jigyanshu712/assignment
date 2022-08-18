#include<stdio.h>
int main(){
int a[3][3],b[3][3],i,j;
printf("enter the element in matrix 1\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}
printf(" the given matrix is :\n");

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%2d",a[i][j]);
    }
    printf("\n");
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
       b[i][j]=a[j][i];
    }
}
printf("the transpose matrix is:\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%2d",b[i][j]);
    }
    printf("\n");
}
return 0;
}
