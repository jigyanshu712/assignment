#include<stdio.h>
int main(){
    int a[10],i,j,temp;
    printf("enter the 10 elements\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){

        for(j=i+1;j<10;j++){
            if(a[i]>a[j]){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("sorted element is :\n");
    for(i=0;i<10;i++){
        printf("%d\n",a[i]);
    }






return 0;
}
