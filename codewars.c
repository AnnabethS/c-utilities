#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hash(char* str);

int main(int argc, char** argv)
{
	return 0;
}

int badhash(char* str) {
	int a = 0;
	for(int i=0; i < strlen(str); i++)
	{
		a += str[i];
	}

	int b = 0;
	for(int i=0; i < strlen(str)-1; i++)
	{
		b += (str[i+1] - str[i]);
	}

	int c = ((a | b) & (!a)) << 2;
	int d = c ^ (32 * strlen(str) + 1);
	return d;
}
