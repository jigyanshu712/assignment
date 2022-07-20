#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b,c,d,e;
  printf("enter the marks of five subjects\n");
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  if(a>=33&&b>=33&&c>=33&&d>=33&&e>=33)
    printf("you are passed");
    else
        printf("you are failed");

    getch();
    return 0;
}

