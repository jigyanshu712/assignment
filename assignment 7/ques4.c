#include<stdio.h>
#include<conio.h>
int main()
{  int a,b,h;
printf("enter the two numbers\n");
scanf("%d%d",&a,&b);
for(h=a<b?a:b; h>=1;h--){
    if(a%h==0 && b%h==0)
    {
       break;
    }
}
printf("the hcf is %d",h);


    getch();
    return 0;
}
