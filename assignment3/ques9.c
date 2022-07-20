#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,x;
  printf("enter the three numbers\n");
  scanf("%d%d%d",&a,&b,&c);
 x= a>b?(a>c?a:c):(b>c?b:c);
 printf("%d is greatest",x);

    getch();
    return 0;
}

