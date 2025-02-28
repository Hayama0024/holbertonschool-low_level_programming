#include "main.h"
/**
 * _atoi - converts a string into an integer
 * @s: array of string
 * Return: The converted integer (or 0 if no numbers found)
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, n = 0;
	int found_num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			n = n * 10 + (s[i] - '0');
			found_num = 1;
		}
		else if (found_num)
		{
			return (n * sign);
		}
		i++;
	}

	return (n * sign);
}
