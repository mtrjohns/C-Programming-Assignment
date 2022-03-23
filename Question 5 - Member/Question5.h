/*****************************
* Question 5 - Member header *
*****************************/

#ifndef _Q5_
#define _Q5_

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
void memberHandicapSort(Member *group, int count);

#endif