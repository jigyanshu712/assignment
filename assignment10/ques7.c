#include<stdio.h>
#include<conio.h>
int fact(int);
int combi(int,int);
int main(){
    int n,r;
    printf("enter n and r\n");
    scanf("%d%d",&n,&r);
    printf(" the combination is %d",combi(n,r));
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



int combi(int n,int r){
return((fact(n))/((fact(r))*(fact(n-r))));


}
