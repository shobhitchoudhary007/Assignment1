// Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
// For first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill

#include<stdio.h>
int main()
{
	float bill, units;

	printf("Enter the units consumed=");
	scanf("%f",&units);

	if(units<=50 && units>=0)
	{
		bill=units*0.50;
		printf("Electricity Bill=%f Rupees",bill);
	}
	else if(units<=100 && units>50)
	{
		bill=50*0.50+(units-50)*0.75;
		printf("Electricity Bill=%f Rupees",bill);

	}
	else if(units<=250 && units>150)
	{
		bill=50*0.50+100*0.75+(units-150)*1.20;
		printf("Electricity Bill=%f Rupees",bill);

	}

	else if(units>250)
	{
		bill=50*0.50+100*0.75+100*1.20+(units-250)*1.50;
		printf("Electricity Bill=%f Rupees",bill);

	}
	else
	{
		printf("Please enter valid consumed units...");
	}
	return 0;
}



// Input
// Enter the units consumed=75
// Output
// Electricity Bill=43.750000 Rupees