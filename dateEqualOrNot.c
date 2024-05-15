// Define a structure for date having dd/mm/yyyy. Provide functions for reading, displaying and comparing two dates are equal or not
 
#include<stdio.h>
#include<conio.h>
struct date
{
	int day;
	int month;
	int year;
};
void main()
{
	struct date d1,d2;
	printf("enter the first day in dd\n");
	scanf("%d",&d1.day);
	printf("enter first month as mm\n");
	scanf("%d",&d1.month);
	printf("enter first year as yyyy\n");
	scanf("%d",&d1.year);
	
	printf("enter the second day in dd\n");
	scanf("%d",&d2.day);
	printf("enter second month as mm\n");
	scanf("%d",&d2.month);
	printf("enter first year as yyyy\n");
	scanf("%d",&d2.year);

	if((d1.day==d2.day)&&(d1.month==d2.month)&&(d1.year==d2.year))
	{
		printf("EQUAL");
	}
	else
	{
		printf("NOT EQUAL");
	}
}