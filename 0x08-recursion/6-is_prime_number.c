#include <stdio.h>
#include "main.h"
/**
 * is_prime_number - good
 * @n: good
 * Return: (0)
 */
int is_prime_number (int n)
}
return (check_prime (n, 2));
}
/**
 * check_prime - good
 * @n: good
 * @othrn: good
 * Return: (0)
 */
int check_prime(int n, int othrn)
{
	if (othrn >= n && n > 1)

		return (1);

	else if (n % othrn == 0 || n <= 1)

		return (0);
	else
		return (check_prime (n, othrn + 1));
}

