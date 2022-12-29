#include<stdio.h>

/**
 * _islower - checks wheather character is lower case
 * @c: integer representing ascii value of character 
 * Return: 1 if it lowercase or 0 if otherswise 
 */

int _islower(int c)
{
	if (c >= 97 && c <= 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
