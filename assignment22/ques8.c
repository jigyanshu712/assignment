#include<stdio.h>
int main(){
     int *ptr;
     ptr=(int *)malloc(sizeof(int));
     *ptr=5;
     printf("before free value is %d\n",*ptr);
     free(ptr);
     printf("after free  value is %d",*ptr);
     return 0;
}
