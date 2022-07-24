#include<stdio.h>
#include<conio.h>
int fibb(int );
int main(){
     int n;
     printf("enter the number\n");
     scanf("%d",&n);
     printf("the first %d fibonacci number\n",n);
     fibb(n);

    getch();
    return 0;
}

int fibb(int n){
    int a=-1,b=1,c,i;
    for(i=1;i<=n;i++){
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }


}
