#include "main.h"

/**
* _strstr - function locate
*  @haystack: pointer to char
*  @needle: pointer to char
*  Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	themfon
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x07-pointers_arrays_strings/5-strstr.c
@themfon
themfon locate substring
 1 contributor
Executable File  32 lines (29 sloc)  435 Bytes
#include "main.h"

/**
* _strstr - function locate
*  @haystack: pointer to char
*  @needle: pointer to char
*  Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = fneedle;
		result++;
		haystack = result;
	}
	return (0);
}	
