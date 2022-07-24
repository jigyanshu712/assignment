#include<stdio.h>
#include<conio.h>
int s(int);
int main(){
int n;
printf("enter the number\n");
scanf("%d",&n);
printf(" the square of %d is %d",n,s(n));
getch();
return 0;
}
  int s(int n){
  return(n*n);

  }
