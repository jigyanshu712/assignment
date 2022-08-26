#include<stdio.h>
int main(){
    int size,i,*ptr,sum=0;
    printf("enter the number\n");
    scanf("%d",&size);
    ptr=(int *)calloc(size,sizeof(int));
    if(ptr==NULL){
        printf("memory cannot be allocated\n");
        return 0;
    }
    printf("enter the %d elements\n",size);
    for(i=0;i<size;i++){
        scanf("%d",ptr+i);
    }
    for(i=0;i<size;i++){
        sum=sum+*(ptr+i);
    }
    printf("the sum of %d elemnts is %d",size,sum);
    free(ptr);

return 0;
}
