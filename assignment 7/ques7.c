#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,a,b;
printf("enter the two numbers\n");
scanf("%d%d",&a,&b);
 printf("all the prime number between %d and %d\n",a,b);
for(i=a;i<=b;i++)
{
  for(j=2;j<i;j++)
  {
      if(i%j==0)
        break;
  }
  if(i==j)
    printf("%d\n",i);

}




    getch();
    return 0;
}

