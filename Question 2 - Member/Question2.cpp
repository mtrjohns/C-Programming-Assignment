/*******************************
** Question 2 - Member source **
*******************************/


#include <stdio.h>
#include "Question2.h"
/*
Creating Functions Research Reference:
G. Perry and D. Miller,
C Programming Absolute Beginner's Guide (3rd Edition),
3rd ed., Indiana: Que Publishing, 2013, pp. 286-289.
*/

// Function to ask for components of Member structures from user
void memberReader(Member *a)
{
	printf("Enter members name: ");
	scanf("%s", a->name);

	printf("Enter members age: ");
	scanf_s("%d", &a->age);

	printf("Enter members gender: ");
	scanf("%s", a->gender);

	printf("Enter members handicap: ");
	scanf_s("%d", &a->handicap);

	printf("Enter members registration number: ");
	scanf_s("%d", &a->playerRegNum);
}

// Function to print Member structure
void memberPrinter(Member *a)
{
	printf("Name: %s\nAge = %d\nGender = %s\n", a->name, a->age, a->gender);
	printf("Handicap = %d\nRegistration Number = %d\n", a->handicap, a->playerRegNum);
}