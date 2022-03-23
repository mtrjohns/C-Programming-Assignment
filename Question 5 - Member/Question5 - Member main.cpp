/*****************************
** Question 5 - Member main **
*****************************/

#include <stdio.h>
#include <stdlib.h>
#include "Question5.h"

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
	int count = memberReader(group);

	FILE *ptrMemberFile;

	memberPrinter(group, count);

	memberHandicapSort(group, count);

	// open Members.dat with write attribute
	ptrMemberFile = fopen("Members.dat", "w");
	memberToFile(group, count, ptrMemberFile);
	fclose(ptrMemberFile);

	ptrMemberFile = fopen("Members.dat", "r");
	memberFromFile(group, count, ptrMemberFile);
	fclose(ptrMemberFile);

	free(group);
	group = nullptr;

	return 0;
}