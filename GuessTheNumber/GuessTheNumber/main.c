//created by Ma77hias

#include<stdio.h>
#include<stdlib.h>
#include <time.h>

void main(void)
{
	int randomValue = 0;
	int userValue = 0;
	int tries = 0;
	int numberRange = 0;

	printf("choose a numberrange: ");
	scanf_s("%d", &numberRange);


	time_t actualTime;// Deklaration von typ time_t
	time(&actualTime);// get Second since 1.1.1970

	srand(actualTime);// Initzialize (seed) the RNG


	randomValue = (rand() % numberRange) + 1;
	//printf("\nrandomValue = %d \n", randomValue);           //showes you the random number ;)

	do {
		printf("Insert number: ");
		scanf_s("%d", &userValue);
		tries++;
		if (userValue != randomValue)
		{
			printf("\n---- Try again ... %d Tries ----\n\n\n", tries);
		}


	} while (userValue != randomValue);

	printf("\n--- Winner Winner Chicken Dinner ... %d tries\n\n\n",tries);

		system("pause");
}
