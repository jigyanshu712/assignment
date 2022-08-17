#include<stdio.h>
 int adja(int[],int);
 int main(){
      int n,i,x;
       printf(" enter the size of the array\n");
       scanf("%d",&n);
       int a[n];
       printf(" enter the element of the array\n");
       for(i=0;i<n;i++){
        scanf("%d",&a[i]);
       }
       x=adja(a,n);
       if(x)
        printf("the  first adjacent duplicate element is %d",x);
       else
        printf("there is no adjacent element\n");


  return 0;
  }

  int adja(int a[],int n){
      int i;
      for(i=0;i<n;i++){
        if(a[i]==a[i+1])
            return(a[i]);
      }
  return 0;



  }
