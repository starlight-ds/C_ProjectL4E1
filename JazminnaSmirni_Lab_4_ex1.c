/*
 * JazminnaSmirni_Lab_4_ex1.c
 *
 *  Created on: Feb 21, 2024
 *      Author: jsmirni
 */

#include <stdio.h>
#include <math.h>
#define PI 3.141592653589

int
main(void)
{
	setvbuf(stdout, NULL,_IONBF, 0);
	double result;
	char shape;
	int side;
	int r;

	printf("Enter the first character of the figure name (S or C): ");
	scanf("%c", &shape);

	if (shape == 'c' || shape == 'c'){
		printf("Enter the radius: ");
		scanf("%d", &r);
		result = PI * r * r;
		printf("the result is %f", result);
	}
	else
	{
		printf("Enter the side length: ");
		scanf("%d", &side);
		result = side * side;
		printf("the result is %f", result);
	}


	return 0;
}
