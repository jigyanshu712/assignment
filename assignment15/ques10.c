#include<stdio.h>
int main(){
int n,i,j,count;
printf("enter the size of the array\n");
scanf("%d",&n);
int a[n],f[n];
printf(" enter the elements of the array\n");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    f[i]=-1;
}
for(i=0;i<n;i++){
        count=1;
    for(j=i+1;j<n;j++){
        if(a[i]==a[j])
            {

                count++;
                f[j]=0;
            }
    }
    if(f[i]!=0){
        f[i]=count;
    }
}
printf("the frequency of each element in the array\n");
for(i=0;i<n;i++){
    if(f[i]!=0){
        printf("%d ocuurs in %d times\n",a[i],f[i]);
    }
}



}
