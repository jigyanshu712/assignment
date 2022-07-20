#include<stdio.h>
#include<conio.h>
int main()
{
	int unit;
	float amount,total_amount,s_charge;
	printf("enter the number of units you consumed\n");
	scanf("%d",&unit);
	switch(unit<=50)
	{
		case 1:
			amount=unit*0.50;
			break;
			case 0:
				switch(unit<=100)
				{
					case 1:
						amount=50*0.50+(unit-50)*0.75;
						break;
						case 0:
							switch(unit<=200)
							{
								case 1:
								amount=50*0.50+100*0.75+(unit-150)*1.20	;
								break;
								case 0:
								    	amount=50*0.50+100*0.75+100*1.20+(unit-250)*1.50;
								break;
							}
						break;
				}
			break;
	}
	s_charge=amount*0.20;
	total_amount=amount+s_charge;
	printf("your total bill is Rs %f",total_amount);
}
