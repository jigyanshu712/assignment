#include<stdio.h>
#include<conio.h>
  int ev(int n);
int main(){
    int n,s;
    printf("enter the number");
    scanf("%d",&n);
    s=ev(n);
    printf("%d",s);



getch();
return 0;
}
 int ev(int n){
  if(n%2==0)
    return 1;
    else
        return 0;

  }
