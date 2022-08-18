#include<stdio.h>
int main(){
int a[3][3],b[3][3],c[3][3],i,j;
printf("enter the element in matrix 1\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("enter the element in matrix 2\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&b[i][j]);
    }
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
    }
}
printf("the addition of two matrices is :\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d\n",c[i][j]);
    }
}
return 0;
}

