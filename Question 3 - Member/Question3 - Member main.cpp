/*******************************
** Question 3 - Member main **
*******************************/

#include <stdio.h>
#include <stdlib.h>
#include "Question3.h"

/*
Malloc usage and Freeing of memory after use:
M.A.Vine,
C Programming for the Absolute Beginner, 2nd ed.,
Boston: Course Technology, 2009, pp. 231 - 236.
*/

int main(int argc, char* argv[])
{
	// Create a pointer to a Member using dynamic memory
	Member *group = (Member*)malloc(MAX_SIZE*sizeof(Member));

	unsigned int count = memberReader(group);

	memberPrinter(group, count);

	free(group);
	group = nullptr;

	return 0;
}