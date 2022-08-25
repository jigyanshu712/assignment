#include<stdio.h>
struct student {
    char name[40];
   int rollno;
    int sem;
};
int main(){
    struct student s[10];
    int i;
    for(i=0;i<10;i++){
        printf("enter your name :\n");
        fflush(stdin);
        gets(s[i].name);
        printf("enter your rollno.:\n");
        scanf("%d",&s[i].rollno);
        printf("enter your current semester:\n");
        scanf("%d",&s[i].sem);
    }
    for(i=0;i<10;i++){
        printf("name=%s  rollno=%d  sem=%d",s[i].name,s[i].rollno,s[i].sem);
        printf("\n\n");
    }
return 0;
}
