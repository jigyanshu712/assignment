#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("enter the day number of a week\n");
    scanf("%d",&n);
    switch(n){
    case 1:
        printf("Wishing you a great day ahead, may you achieve whatever you have planned for today.");
        break;
    case 2:
        printf("Wishing you wealth and good health, have a great day.");
        break;

    case 3:
        printf("Today marks the day of another opportunity for you. Have a great day.");
        break;

         case 4:
        printf("Have an awesome day today, may your boss be as nice as I am!");
        break;

         case 5:
        printf("May you have a great day today, sparkle and shine amongst everyone!");
        break;

         case 6:
        printf("Reminder: It's you and you are unique. Have a great day!");
        break;

          case 7:
        printf("Dreams are what keeps us awake and they always step ahead with each coming day, have a great day and fulfill your dreams!");
        break;

          default:
            printf("invalid");





    }


    getch();
    return 0;
}
