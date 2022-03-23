/*******************************
** Question 3 - Member source **
*******************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Question3.h"

/*
Creating Functions Research Reference:
G. Perry and D. Miller,
C Programming Absolute Beginner's Guide (3rd Edition),
3rd ed., Indiana: Que Publishing, 2013, pp. 286-289.
*/

// Function to ask for components of Member structures from user
int memberReader(Member *group)
{

	unsigned int check = 0;
	unsigned int i = 0;
	char *store = (char*)malloc(MAX_SIZE*sizeof(char));

	// pre-read to ask if loop will be entered
	printf("Would you like to add a member (yes = 1, no = 0)? ");
	scanf_s("%d", &check);

	// While loop to ask for components of Member structures from user
	while (check == 1 && i < MAX_SIZE)
	{
		printf("Enter member %d's name: ", i + 1);
		scanf("%s", &store[i]);
		strcpy(group[i]->name, &store[i]);

		printf("Enter member %d's age: ", i + 1);
		scanf_s("%d", &group[i]->age);

		printf("Enter member %d's gender: ", i + 1);
		scanf("%s", group[i]->gender);

		printf("Enter member %d's handicap: ", i + 1);
		scanf_s("%d", &group[i]->handicap);

		printf("Enter member %d's registration number: ", i + 1);
		scanf_s("%d", &group[i]->playerRegNum);

		printf("Would you like to add another member (yes = 1, no = 0)?");
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

	printf("Would you like to print the entire array of members (yes = 1, no = 0)? ");
	scanf_s("%d", &check);

	// while check has been entered as 1 and count has not exceeded count argument
	while (check == 1 && i < count)
	{
		printf("Name: %s\nAge = %d\nGender = %s\n", &group[i]->name, group[i]->age, &group[i]->gender);
		printf("Handicap = %d\nRegistration Number = %d\n", group[i]->handicap, group[i]->playerRegNum);

		i++;
	}
}