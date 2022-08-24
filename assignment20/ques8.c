#include<stdio.h>
int sum(int*,int);
int main(){
int n,x,i;
printf("enter the size of the string\n");
scanf("%d",&n);
int a[n];
printf("enter the elements of the string:\n");
for(i=0;i<n;i++){
        scanf("%d",&a[i]);

}
x=sum(a,n);
printf("the sum of the elements is %d",x);
return 0;
}


int sum(int*a,int n){
    int s=0,i;
    for(i=0;i<n;i++){
        s=s+a[i];
    }
    return s;
}
