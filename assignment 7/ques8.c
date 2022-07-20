#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,j;
printf("enter the number:-\n");
scanf("%d",&n);
for(i=n+1;i>0;i++)
{
    for(j=2;j<i;j++)
    {
        if(i%j==0)
            break;
    }
    if(i==j)
    {
        printf("the next prime number is %d\n",i);
        break;
    }
}




    getch();
    return 0;
}

