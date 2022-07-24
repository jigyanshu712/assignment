#include<stdio.h>
#include<conio.h>
 int lcm(int,int);
int main(){
    int a,b,l;
    printf("enter the two numbers\n");
    scanf("%d%d",&a,&b);
    l=lcm(a,b);
    printf(" the lcm of %d and %d is %d",a,b,l);
getch();
return 0;
}

int lcm(int a,int b){
    int l;
    for(l=(a>b?a:b); l<=a*b ;l=l+(a>b?a:b)){
        if(l%a==0 && l%b==0)
            break;
    }
    return(l);




}
