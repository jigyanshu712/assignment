#include<stdio.h>
#include<conio.h>
int fact(int);
int per(int,int);
int main(){
    int n,r;
    printf("enter n and r\n");
    scanf("%d%d",&n,&r);
    printf(" the permutation is %d",per(n,r));
getch();
return 0;
}
int fact(int n){
    int f=1,i;
    for(i=1;i<=n;i++){
        f=f*i;
    }
return f;


}



int per(int n,int r){
return((fact(n))/(fact(n-r)));


}

