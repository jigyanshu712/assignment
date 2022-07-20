#include<stdio.h>
#include<conio.h>
int main()
{
	int number,choice;
	printf("enter an even number\n");
	scanf("%d",&number);
	switch(number%2==0)
	{
		case 1:
			printf("Rounded off to nearest upper odd\n");
			printf("%d",number+1);
			break;

}
getch();
return 0;}

