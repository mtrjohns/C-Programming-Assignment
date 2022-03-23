/*******************************
** Question 4 - Member header **
*******************************/

#ifndef _Q4_
#define _Q4_

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
}Member[MAX_SIZE];

// Function prototypes
int memberReader(Member *group);
void memberPrinter(Member *group, int count);
void memberToFile(Member *group, int count, FILE*);
int memberFromFile(Member *group, int count, FILE*);

#endif