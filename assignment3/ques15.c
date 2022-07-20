 #include<stdio.h>
 #include<conio.h>
 int main()
 {
     int n;
     printf("enter a number\n");
     scanf("%d",&n);
     if(n>0)
        printf("positive number");
     else
     {
         if(n<0)
            printf("negative number");
         else
            printf("zero");
     }

     getch();
     return 0;

 }
