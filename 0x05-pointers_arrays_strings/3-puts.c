Task 3.txt
Who has access
A
System properties
Type
Text
Size
302 bytes
Storage used
302 bytes
Location
pointers arrays and strings
Owner
Antony Bahati
Modified
Sep 19, 2022 by Antony Bahati
Opened
9:42 PM by me
Created
Sep 19, 2022
No description
Viewers can download
#include <stdio.h>
#include "main.h"

/**
 *_puts - prints a string
 * @str: string to print
 *
 * Description: prints a string
 * On success: returns no error
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
