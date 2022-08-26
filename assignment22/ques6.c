#include<stdio.h>
int main(){
    int n,i,*ptr;
    printf("enter the number :\n");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("memory is not allocated\n");
        return 0;
    }
    printf("enter the %d number:",n);
    for(i=0;i<n;i++){
        scanf("%d",ptr+i);
    }

    for(i=1;i<n;i++){
            if(*ptr<*(ptr+i)){
                *ptr=*(ptr+i);
            }

    }
    printf("the maximum number is %d",*ptr);
    free(ptr);
return 0;
}
