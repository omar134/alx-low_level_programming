#include <stdlib.h>
#include <stdio.h> 
#include <time.h>
/* more headers goes there 
 fucntion to determine if a random number is greater than, equals, less than zero */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		 printf("%d is zero", n);
	else
		if (n > 0)
			printf("%d is positive", n);
		
		else
			printf("%d is negative", n);
	return (0);
}
