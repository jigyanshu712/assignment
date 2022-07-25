#include<stdio.h>
int digit(int);
int main(){
     int n,s;
     printf("enter the digit\n");
     scanf("%d",&n);
     s=digit(n);
      printf("the sum of digit is %d",s);
      return 0;

}


int digit(int n){
        static s,r;
        if(n){
           r=n%10;
        s=s+r;
        digit(n/10);
           }

           return(s);




}
