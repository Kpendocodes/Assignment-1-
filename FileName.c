
//keno-prog7199-fall24-week04


#include <stdio.h>
#include <math.h>
#define CRT_SECURE_NO_WARNINGS
int main(void) {
	// declare the values
	int  days;
	int weeks;
	int remainingdays;
	
	// ask a user for the number of days as an integer
	do {
		printf("please enter a number in days \n");
		scanf_s("%d", &days);
		// transform
		if (days > 0) {
			weeks = days / 7;
			remainingdays = days % 7;
			
			// output  
			printf("+-------------------------------------------+\n");
			printf("|%d the number of days %d weeks , %d days.	|\n", days, weeks, remainingdays);
			printf("+-------------------------------------------+\n");
		}


	} while (days > 0);

	return 0;
}
