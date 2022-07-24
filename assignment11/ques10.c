#include<stdio.h>
#include<conio.h>
int main(){
    int n=5;
    sum(n);
getch();
return 0;
}
 void sum(int n){
     int i,sum=0;
     for(i=1;i<=n;i++){
        sum=sum+(fact(i)/i);
     }
     printf(" the sum of 1!/1+2!/2+3!/3+4!/4+5!/5 is %d",sum);

 }


   int fact(int n){
        int i,f=1;
   for(i=1;i<=n;i++){
    f=f*i;
   }
   return f;

   }
