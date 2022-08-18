#include<stdio.h>
int main(){
    int a[3][3],i,j,max=0,sum=0,index;
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
            if(a[i][j]==1){
                sum=sum+a[i][j];
                }
        }
        if(sum>max){
            max=sum;
            index=i;
        }

    }
    printf("the maxiumum no of one in %d row",(index+1));

return 0;
}

