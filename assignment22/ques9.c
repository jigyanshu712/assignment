#include<stdio.h>
int main(){
     int *ptr;
     ptr=(int *)malloc(sizeof(int));
    if(ptr==NULL){
        printf("memory allocation is failed\n");
        return 0;
    }
    free(ptr);
     return 0;
}

