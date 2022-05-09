#include "shell.h"

/**
 * *_strdup - Function that copy an array
 * @str: The string that receives
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *ar;

	if (!str)
		return (NULL);
	while (str[size])
	size++;
	ar = malloc(size * sizeof(char) + 1);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	ar[i] = str[i];
	ar[i] = '\0';
	return (ar);
}

/**
 * _strlen - return the length of a string
 * @str: The string that receives.
 * Return: The count of characters in string.
 */
size_t _strlen(char *str)
{
	size_t i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}


/**
 * *string_nconcat - Function that concatenates two strings
 * @s1: The first string that receives
 * @s2: The second string that receives
 * @n: The number of bytes that you need copy
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0, len_s2 = 0;
	char *ar;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)

