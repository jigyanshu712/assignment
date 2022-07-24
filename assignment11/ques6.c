#include<stdio.h>
int  prime(int ,int);
int main(){
    int a,b;
    printf("enter the two numbers\n");
    scanf("%d%d",&a,&b);
    prime(a,b);
    getch();
    return 0;
    }

    int prime(int a,int b)
    {int i,j;
    printf("the prime number between %d and %d is:\n",a,b);

        for(i=a;i<=b;i++){
                for(j=2;j<i;j++){
                    if(i%j==0)
                        break;
                }
                if(i==j)
                    printf("%d\n",i);

        }
    }
