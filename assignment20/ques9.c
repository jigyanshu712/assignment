#include<stdio.h>
int main(){
    int n,i;
    printf("enter the size  of the array\n");
    scanf("%d",&n);
    int a[n],*p;
    printf("enter the element of the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    p=&a[n-1];
    printf("array in reverse order\n");
    for(i=0;i<n;i++){
        printf("%d\n",*p--);
    }


return 0;
}
