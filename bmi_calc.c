#include <stdio.h>
#include <math.h>

/**
 * main - program to calculate the Body-Mass-Index of someone
 *
 * Return: 0 always 
 */

int main(void)
{
	/* declear weight and height varifable */
	float weight, height, bmi, sqrh;

	/* collect input */
	printf("Enter your weight(kg): ");
	scanf("%f", &weight);

	printf("Enter your height: ");
	scanf("%f", &height);

	sqrh = height * height;

	/* calcuclate bmi */
	bmi = weight / sqrh;

	/* check for weight status */
	if (bmi == 0 || bmi <= 18.5)
	{
		printf("Your are in the underweight range, you need to see your doctore \n");
	}
	else if (bmi == 18.5 || bmi <= 24.9)
		printf("Your are in healthy weight range\n");
	else if (bmi == 25 || bmi <= 29.9)
		printf("You are in the overweight range\n");

	/** Nested if to check for obess class */
	else if (bmi == 30 || bmi > 30)
	{
		if (bmi == 30 || bmi <= 35)
		{
			printf ("Your are in the class 'A' obessity\n");
		}
		else if (bmi == 35 || bmi <=50)
			printf("Your are in the class 'B' obessity\n");
		else
			printf("your are in class 'C' obessity\n");
	}
	else
		printf("Invalid entry, retype your weight and height again");

	printf("Your BMI = %f Kg/meter-sqr\n", bmi);

	return (0);
}
