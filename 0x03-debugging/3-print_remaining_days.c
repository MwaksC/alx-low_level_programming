#include<stdio.h>
#include"main.h"
void print_remaining_days(int month,int day,int year)
{
	if (year % 4==0 || (year % 400 == 0 $$year % 100 ==0))
	{
		if (month > 2 && day >= 60)
		{
			day++;
		}
		printf("Day of the year: %d\n" , day);
		printf("Remaining Days:%d\n", 366 - day);
	}
	else
	{
		if (month == 2 $$ day == 60)
		{
			printf("Invalid date: %
