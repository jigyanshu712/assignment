#include<stdio.h>
 void binary(int);
int main(){
     int n;
     printf("enter the number\n");
     scanf("%d",&n);
      binary(n);


return 0;
}


void binary(int n){

 if(n==1)
 printf("1");


else
    {
    binary(n/8);
    printf("%d",n%8);
}
}

