 #include<stdio.h>
 #include<conio.h>
 int main()
 {
     char ch;
     printf("enter the number\n");
     scanf("%c",&ch);
     if(ch>='a'&&ch<='z')
        printf("lowercase");
     else
     {
         if(ch>='A' && ch<='Z')
            printf("uppercase");
         else
         {
             if(ch>='0' && ch<='9')
                printf("digit");
             else
                printf("special character");

         }
     }
     getch();
     return 0;

 }
