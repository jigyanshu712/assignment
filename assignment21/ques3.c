#include<stdio.h>
struct employee{
    int id;
    char name[40];
    int salary;
};
int main(){
      struct employee e1;
      printf("enter your employee id:");
      scanf("%d",&e1.id);
      fflush(stdin);
      printf("enter your name\n");
     gets(e1.name);
      printf("enter your salary\n");
      scanf("%d",&e1.salary);
      printf("\n\n\n");
      printf("id = %d , name = %s , salary = %d",e1.id,e1.name,e1.salary);

      return 0;

}
