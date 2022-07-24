#include<stdio.h>
#include<conio.h>
int fact(int);
int combi(int,int);
int printpascal(int);

int fact(int n){
    int i,f=1;
    if(n==0){
        return 1;
    }
    else
    {
        for(i=1;i<=n;i++){
                f=f*i;

        }
        return f;
    }
}



int combi(int n,int r){
return(fact(n)/( fact(n-r)*fact(r)  ) );
}
 int printpascal(int line){
     int i,j,k,r;

     for(i=1;i<=line;i++){
            k=1;
            r=0;
        for(j=1;j<=2*line-1;j++){
            if(j>=line+1-i && j<=line-1+i && k )
            {
                printf("%2d",combi(i-1,r));
                r++;
                k=0;
            }
            else
            {

                printf("  ");
                k=1;
            }
        }
        printf("\n");
     }


 }



 int main(){ int n;
 printf("enter the line \n");
 scanf("%d",&n);
 printpascal(n);
 return 0;

 }




