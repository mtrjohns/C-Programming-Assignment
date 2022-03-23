/*******************************
** Question 2 - Member header **
*******************************/

#ifndef _Q2_
#define _Q2_

/*
Structure Creation and Pointers into a function Research Reference:
M. A. Vine,
C Programming for the Absolute Beginner, 2nd ed.,
Boston: Course Technology, 2009, pp. 203-215.
*/

// Constant Variable to assign max array size
const int MAX_SIZE = 32;

// Structure for a Member record
typedef struct
{
	char name[MAX_SIZE];
	unsigned int age;
	char gender[MAX_SIZE];
	int handicap;
	unsigned int playerRegNum;
}Member;

// Function prototypes
void memberReader(Member *a);
void memberPrinter(Member *a);

#endif