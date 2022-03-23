/*****************************
** Question 2 - Member main **
*****************************/


#include <stdio.h>
#include "Question2.h"

int main(int argc, char* argv[])
{
	// Create a Member
	Member a;

	memberReader(&a);
	memberPrinter(&a);

}