/*****************************
* Question 5 - Member source *
*****************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Question5.h"

/*
Creating Functions Research Reference:
G. Perry and D. Miller,
C Programming Absolute Beginner's Guide (3rd Edition),
3rd ed., Indiana: Que Publishing, 2013, pp. 286-289.

File IO 1 - Research Reference:
G. Perry and D. Miller,
C Programming Absolute Beginner's Guide (3rd Edition),
3rd ed., Indiana: Que Publishing, 2013, pp. 250-259.

File IO 2 - Research Reference:
P. J. Deital and H. M. Deital,
C How To Program,
5th ed., New Jersey: Pearson Education, 2007, pp.442, 447-448

Sorting Algorithm Research Reference:
R.Sedgewick,
Algoritms in C++,
Addison - Wesley Publishing Company, Inc, 1992, pp. 100 - 106.
*/

// Function to ask for components of Member structures from user
int memberReader(Member *group)
{

	unsigned int check = 0;
	unsigned int i = 0;
	char *store = (char*)malloc(MAX_SIZE*sizeof(char));

	printf("Would you like to add a member (yes = 1, no = 0)? ");
	scanf_s("%d", &check);

	// While loop to take iput from user and store into structure
	while (check == 1 && i < MAX_SIZE)
	{
		printf("Enter member %d's name: ", i + 1);
		scanf("%s", &store[i]);
		strcpy(group[i]->name, &store[i]);

		printf("Enter member %d's age: ", i + 1);
		scanf_s("%d", &group[i]->age);

		printf("Enter member %d's gender: ", i + 1);
		scanf("%s", &group[i]->gender);

		printf("Enter member %d's handicap: ", i + 1);
		scanf_s("%d", &group[i]->handicap);

		printf("Enter member %d's registration number: ", i + 1);
		scanf_s("%d", &group[i]->playerRegNum);

		printf("Would you like to add another member (yes = 1, no = 0)? ");
		scanf_s("%d", &check);

		i++;
	}

	free(store);
	store = nullptr;

	return i;
}

// Function to print Member structure
void memberPrinter(Member *group, int count)
{
	unsigned int check = 0;
	unsigned int i = 0;

	printf("Would you like to print the entire array of members to screen (yes = 1, no = 0)? ");
	scanf_s("%d", &check);

	while (check == 1 && i < count)
	{
		printf("Name: %s\nAge = %d\nGender = %s\n", &group[i]->name, group[i]->age, &group[i]->gender);
		printf("Handicap = %d\nRegistration Number = %d\n", group[i]->handicap, group[i]->playerRegNum);

		i++;
	}
}

void memberToFile(Member *group, int count, FILE* ptrWrite)
{
	unsigned int check = 0;
	unsigned int i = 0;

	if (ptrWrite == NULL)
	{
		printf("File did not open.\n");
	}
	else
	{
		printf("Would you like to print the entire array of members to file \"Members.dat\" (yes = 1, no = 0)? ");

		scanf_s("%d", &check);
		while (check == 1 && i < count)
		{
			fprintf(ptrWrite, "%s, %d, %s, %d, %d", group[i]->name, group[i]->age, group[i]->gender, group[i]->handicap, group[i]->playerRegNum);
			printf("Printed member %d to \"Members.dat\"\n", i);

			i++;
		}
	}
}

int memberFromFile(Member *group, int count, FILE *ptrRead)
{
	unsigned int check = 0;
	unsigned int i = 0;

	printf("Would you like to read the entire \"Members.dat\" from file");
	printf("(up to %d records)(yes = 1, no = 0)? ", MAX_SIZE);
	scanf_s("%d", &check);

	if (check == 1)
	{
		if (ptrRead == NULL)
		{
			printf("File did not open.\n");
		}
		else
		{
			printf("Name\t\t\tAge\tGender\tHandicap\tPlayer Registration Number\n\n");

			while (!feof(ptrRead) && i < count)
			{
				printf("%s\t%d\t%s\t%d\t\t%d\n", &group[i]->name, group[i]->age, &group[i]->gender, group[i]->handicap, group[i]->playerRegNum);
				fscanf(ptrRead, "%s\t%d%s%d%d", &group[i]->name, &group[i]->age, &group[i]->gender, &group[i]->handicap, &group[i]->playerRegNum);
				i++;
			}
			printf("\n");
		}

	}
	else
	{
		// Blank else statement
	}

	return i;
}

void memberHandicapSort(Member *group, int count)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int check = 0;

	Member store;

	printf("Would you like to sort Members in order of handicap? (yes = 1, no = 0)");
	scanf_s("%d", &check);

	if (check == 1)
	{

		// Sort handicap in order from smallest first
		for (i; i < count; i++)
		{
			for (j = 0; j < count - 1; j++)
			{
				// If current value is larger than next, swap values
				if (group[j]->handicap >= group[j + 1]->handicap)
				{
					*store = *group[j];
					*group[j] = *group[j + 1];
					*group[j + 1] = *store;
				}
			}
		}
	}
	else
	{
		// blank else statement
	}

	memberPrinter(group, count);
}