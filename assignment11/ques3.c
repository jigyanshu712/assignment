#include<stdio.h>
#include<conio.h>
int checkprime(int);

int main(){
    int n;
    printf("enter the numnber\n");
    scanf("%d",&n);
    if(checkprime(n))
        printf("it is a prime number\n");
    else
    printf("it is not a prime number\n");


getch();
return 0;
}

int checkprime(int n){
    int i;
    for(i=2;i<n;i++){
        if(n%i==0)
            break;
    }
    if(n==i)
        return 1;
    else
        return 0;



}
