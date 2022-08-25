#include<stdio.h>
struct employee{
int id ;
char name[40];
int salary
};
int main(){
    struct employee e[5],temp;
    int i,j;
    for(i=0;i<5;i++){
        printf("enter your name:\n");
        fflush(stdin);
        gets(e[i].name);
        printf("enter your id:\n");
        scanf("%d",&e[i].id);
        printf("enter your salary\n");
        scanf("%d",&e[i].salary);
    }
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(strcmp(e[i].name,e[j].name)>0){
                temp=e[i];
                e[i]=e[j];
                e[j]=temp;
            }
        }
    }
    printf("the sort employee according to their name\n");
    for(i=0;i<5;i++){
        printf("name=%s id=%d salary=%d",e[i].name,e[i].id,e[i].salary);
        printf("\n\n");
    }



return 0;
}
