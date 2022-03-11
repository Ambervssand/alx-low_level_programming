#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int L;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	L = n % 10;
	printf("\n Last digit of n %d = %d", n, L);
	if (L > 5)
		printf("and is greater than 5\n");
	else if (L == 0)
		printf("and is 0\n");
	else if (L < 6 && != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
