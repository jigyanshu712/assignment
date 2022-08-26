#include<stdio.h>
int main(){
    int n,i,*ptr,max,min;
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
    max=*ptr;
    min=*ptr;

    for(i=1;i<n;i++){
            if(max<*(ptr+i)){
                max=*(ptr+i);
            }
        if(min>*(ptr+i))
            min=*(ptr+i);
    }
    printf("the maximum and minimum number is %d and %d",max,min);
    free(ptr);
return 0;
}

