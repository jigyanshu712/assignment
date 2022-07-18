#include<stdio.h>
#include<conio.h>
int main(){
    int x,result=0;
    int count=0;
     printf("enter the number\n");
     scanf("%d",&x);
    while(x!=0)
    {
    result=x&1;
    count++;
    if(result==1)
    {
        printf("%d",count);
        break;

    }
    x=x>>1;


    }
    if(x==0)
    {

    printf("lsb one is nott found");
    }

 getch();
 return 0;}


