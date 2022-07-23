#include<stdio.h>
#include<conio.h>
float area(float);
int main()
{
    float a,r;
    printf(" enter the radius of the circle\n");
    scanf("%f",&r);
    a=area(r);
    printf("the area of circle is %f",a);

    getch();
    return 0;
}
 float area(float r){
     return(3.14*r*r);

 }
