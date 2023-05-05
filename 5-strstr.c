#include "main.h"
char *_strstr(char *haystack, char *needle)
{
	char *start, *check;

	while (*haystack)
	{
		start = haystack;
		check = needle;

		while (*haystack && *check && *haystack == *check)
		{
			haystack++;
			check++;
		}

		if (!*check)
			return (start);

		haystack = start + 1;
	}

	return (NULL);
}
