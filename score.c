#include <stdio.h>

/**
 * function to check for score range
 *
 * Return 0 always
 */

int main(void)
{
	int scores;

	printf("Enter your scores: \n");
	scanf("%d", &scores);

	/*conditionals for the for then scores*/
	if (scores == 0 ||scores < 40)
		printf("your score = %i\n and your grade is F\n", scores);
	else if (scores == 40 || scores < 50)
		printf("your score = %i\n and your grade is E", scores);
	else if (scores == 50 || scores < 60)
		printf("your score = %i\n and your grade is C", scores);
	else if (scores == 60 || scores < 70)
		printf("your score = %i\n and your grrade is B\n", scores);
	else if (scores == 70 || scores <=100)
	{
		if (scores >= 95 )
		{
			printf("You did exceptionally Well, and have won $3000\n");
		}
		printf("your score = %i\n and your grade is A\n", scores);
	}
	else
		printf("Invalid score\n");

	return (0);
}
