#include<stdio.h>
int main(){
    char a[50],b[50],i;
printf("enter your string:");
fgets(a,50,stdin);
for(i=0;a[i];i++){
    b[i]=a[i];
}
printf("\n");
printf("%s",b);

return 0;
}

