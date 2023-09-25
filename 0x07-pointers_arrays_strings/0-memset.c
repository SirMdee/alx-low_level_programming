#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)

	s[i] = b;

	return (s);
}

#endif /* MAIN_H */
