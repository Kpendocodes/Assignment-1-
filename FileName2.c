//2. Write a program that converts your age in years to days and displays both values. At this point, there is no need to prompt the user for their age (simply hard-code an age into the program)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {

	int ageYears = 18; //hard coded age ( i can change this to any number))
	int daysinYear = 365;
	int agedays = ageYears * daysinYear; //conversion process

	//print statements
	printf("age in years: %d\n", ageYears);
	printf("age in days: %d\n", agedays);

	return 0;
}