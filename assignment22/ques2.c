#include<stdio.h>
int main(){
    int *ptr ,c;
    int i=0,size=0,sum=0;
    printf("enter the size of the array :\n");
    scanf("%d",&size);
    ptr=(int *)calloc(size, sizeof(int));
    if(ptr==NULL){
        printf("memory allocation failed\n");
        return 0;
    }
    printf("enter the elements :\n");
    for(i=0;i<size;i++){
        scanf("%d",ptr+i);
    }
    for(i=0;i<size;i++){
        sum=sum+*(ptr+i);
    }
    printf("the average  is %d :\n",sum/size);
    free(ptr);


return 0;
}
