#include <stdio.h>

int main(void)
{
	struct date
	{
		int month;
		int day;
		int year;
	};
	
	struct date today, *datePtr;

	datePtr = &today;

	datePtr->month = 10;
	datePtr->day = 7;
	datePtr->year = 2022;
	
	printf ("month=%i day=%i year=%i\n", today.month, today.day, today.year);

	printf ("Today's date is %i/%i/%.2i \n",
			datePtr->month, datePtr->day, datePtr->year % 100);

	return 0;
}
