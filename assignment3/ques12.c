#include<stdio.h>
#include<conio.h>
int main()
{
   char ch;
   printf("enter the alphabet\n");
   scanf("%c",&ch);
   if(ch>='a'&&ch<='z')
    printf("lowercase");
   else{
    if(ch>='A'&&ch<='Z')
        printf("uppercase");
    else
        printf("invalid");
   }

    getch();
    return 0;
}

