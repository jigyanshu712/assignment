#include<stdio.h>
#include<conio.h>
int main()
{
    int n ,a,b;
    printf("1. addition\n");
    printf("2. subtraction\n");
    printf("3. multiplication\n");
    printf("4. division\n");
    printf("5. exit\n");


    while(1){
            printf("\n\nenter your choice\n ");
    scanf("%d",&n);

            switch(n){
    case 1:

        printf(" enter the two numbers");
        scanf("%d%d",&a,&b);
        printf("sum=%d",a+b);
        break;

         case 2:
        printf(" enter the two numbers");
        scanf("%d%d",&a,&b);
        printf("sub=%d",a-b);
        break;

         case 3:
        printf(" enter the two numbers");
        scanf("%d%d",&a,&b);
        printf("mul=%d",a*b);
        break;

         case 4:
        printf(" enter the two numbers");
        scanf("%f%f",&a,&b);
        printf("div=%f",a/b);
        break;

         case 5:
             exit(0);


         default:
            printf("invalid choice");







            }

    }
    getch();
    return 0;
}
