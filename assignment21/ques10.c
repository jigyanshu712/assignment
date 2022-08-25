#include<stdio.h>
struct Marks{
    int rollno;
    char name[30];
    float chem_marks,phy_marks,math_marks;
    };
    int main(){
        struct Marks marks[5];
        for(int i=0;i<4;i++){
            printf("student %d\n",i+1);
            printf("enter roll no.:\n");
            scanf("%d",&marks[i].rollno);
            printf("enter your name:\n");
            fflush(stdin);
            gets(marks[i].name);
             printf("enter your chemistry marks:\n");
            scanf("%f",&marks[i].chem_marks);
            printf("enter your math marks:\n");
            scanf("%f",&marks[i].math_marks);
            printf("enter your physics marks:\n");
            scanf("%f",&marks[i].phy_marks);

        }

        for(int i=0;i<4;i++){
            printf("student %d\n",i+1);
            float percentage=((marks[i].math_marks+marks[i].chem_marks+marks[i].phy_marks)/(300.0))*100.0;
            printf("percentage : %f\n",percentage);
        }
    return 0;
    }
