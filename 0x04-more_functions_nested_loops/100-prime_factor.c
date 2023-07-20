#include <stdio.h>
int main()
{
	long int n;
	n = 612852475143;
	int div, ans, maxFact;
	div = 2
	ans = 0
	while (n != 0)
	{
		if (n % div != 0)
			div = div + 1;
		else
		{
			maxFact = n;
			n = n / div;
			if (n == 1)
			{
				printf("%ld is the largest prime factor !", maxFact);
				ans = 1;
				break;
			}
		}
	}
	return 0;
}