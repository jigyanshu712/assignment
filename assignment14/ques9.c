#include<stdio.h>
int main(){
    int n,i;
    printf("enter the number\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the %d numbers \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("the reverse array is\n");
    for(i=n-1;i>=0;i--){
        printf("%d\n",a[i]);
    }
    return 0;
}
