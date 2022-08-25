#include<stdio.h>
struct employee{
    int id;
    char name[40];
    int salary;
};
 int main(){
      struct employee e[10];
      struct  employee highest;

     int i;
     for(i=0;i<10;i++){
        printf("enter your name\n");
        fflush(stdin);
        gets(e[i].name);
        printf("enter your name id\n");
        scanf("%d",&e[i].id);
        printf("enter your salary\n");
        scanf("%d",&e[i].salary);

     }
     highest=e[0];

     for(i=1;i<10;i++){
            if(highest.salary <e[i].salary)
            highest=e[i];

     }
      printf("the highest salary is:\n");
      printf("name=%s  id=%d salary=%d",highest.name,highest.id,highest.salary);
 return 0;
 }
