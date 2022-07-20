#include<stdio.h>
#include<conio.h>
int main()
{
    int i,rem,sum,temp;
    printf("armstrong number between 1 and 1000\n");

    for(i=1;i<=1000;i++){
            temp=i;
            sum=0;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;

    }
    if(sum==i)
        printf("%d\n",i);
    }


    getch();
    return 0;
}


