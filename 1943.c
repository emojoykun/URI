/*
	@autor: emojoykun;
	@data: 10/07/2022;
	@nome: Top N;
*/

#include <stdio.h>

int main ()
{
	int n;

	scanf("%d", &n);

	if (n == 1)
		printf("Top 1\n");
	else if (n == 2 || n == 3)
		printf("Top 3\n");
	else if (n == 4 || n == 5)
		printf("Top 5\n");
	else if (n >= 6 && n <= 10)
		printf("Top 10\n");
	else if (n >= 11 && n <= 25)
		printf("Top 25\n");
	else if (n >= 26 && n <= 50)
		printf("Top 50\n");
	else if (n >= 50 && n <= 100)
		printf("Top 100\n");
}
