#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c,n;
    printf(" 1. isoceles traingle\n");
    printf("2. right angled traingle\n");
    printf("3. equilatteral traingle\n");
    printf("4. exit\n");
    while(1){
        printf("\n\nenter your choice\n");
        scanf("%d",&n);
        switch(n)
        {

        case 1:
            printf("enter the three sides of the traingle\n");
            scanf("%d%d%d",&a,&b,&c);
            if(a==b || b==c || c==a)
                printf("it is an isoceles traingle\n");
            else
                printf("it is not an isoceles traingle");
                break;


            case 2:
            printf("enter the hypotenuse,perpendicular and base sides\n");
            scanf("%d%d%d",&a,&b,&c);
            if(b*b +c*c==a*a)
                printf("it is an right-angled traingle\n");
            else
                printf("it is not an right-angled traingle");
                break;


                case 3:
            printf("enter the three sides of the traingle\n");
            scanf("%d%d%d",&a,&b,&c);
            if(a==b && b==c)
                printf("it is an equilateral traingle\n");
            else
                printf("it is not an equilateral traingle");
                break;

                case 4:
                    exit(0);
                default:
                    printf("invalid choice");

        }
    }
getch();
return 0;
}

