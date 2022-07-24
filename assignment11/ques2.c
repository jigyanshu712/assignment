#include<stdio.h>
#include<conio.h>
 int hcf(int,int);
int main(){
    int a,b,l;
    printf("enter the two numbers\n");
    scanf("%d%d",&a,&b);
    l=hcf(a,b);
    printf(" the hcf of %d and %d is %d",a,b,l);
getch();
return 0;
}

int hcf(int a,int b){
    int l;
    for(l=(a>b?b:a); l>=1 ;l++){
        if(a%l==0 && b%l==0)
            break;
    }
    return(l);




}

