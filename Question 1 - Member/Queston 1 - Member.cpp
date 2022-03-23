/*************************
 ** Question 1 - Member **
 ************************/

#include <stdio.h>
#include <string.h>

/*
 Structure Creation and Pointers into a function Research Reference:
 M. A. Vine,
 C Programming for the Absolute Beginner, 2nd ed.,
 Boston: Course Technology, 2009, pp. 203-215.
*/

// Constant Variable to assign max array size
const int MAX_SIZE = 32;

// Structure to hold Member details
typedef struct
{
	char name[MAX_SIZE];
	unsigned int age;
	char gender[MAX_SIZE];
	int handicap;
	unsigned int playerRegNum;
}Member;

// Prototypes for functions
void memberReader(Member *a);
void memberPrinter(Member *a);


int main(int argc, char* argv[])
{
	// create member structure
	Member a;


	memberReader(&a);
	memberPrinter(&a);

}

/*********************
***** Functions ******
*********************/

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