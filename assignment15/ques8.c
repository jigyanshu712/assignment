#include<stdio.h>
void unique(int[],int);
int main(){
     int n,i;
     printf(" enter the size of the array\n");
     scanf("%d",&n);
     int a[n];
     printf("enter the elements of the array\n");
     for(i=0;i<n;i++){
        scanf("%d",&a[i]);
     }
     unique(a,n);
return 0;
}
 void unique(int a[],int n){
     int i,j,count;
     printf("the unique elements is :\n");
     for(i=0;i<n;i++){
            count =0;
        for(j=i+1;j<n;j++){
            if(a[i]==a[j])
                a[i]=a[j]=-1;
                count=1;
        }

     }

     for(i=0;i<n;i++){
        if(a[i]!=-1){
            printf("%d\n",a[i]);
        }
     }



  }



