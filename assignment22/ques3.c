#include<stdio.h>
int main(){
    int i,n,*ptr,sum=0;
    printf("enter the number\n");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("memory allocation failed\n");
        return 0;
    }
    printf("enter the %d elements\n",n);
    for(i=0;i<n;i++){
        scanf("%d",ptr+i);
    }
    for(i=0;i<n;i++){
        sum+=*(ptr+i);
    }
    printf("the sum of %d number is %d ",n,sum);
    free(ptr);

return 0;
}
