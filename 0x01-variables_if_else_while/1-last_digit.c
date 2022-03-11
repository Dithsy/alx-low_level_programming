#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints the last didgit of the random
* number stored in the variable n
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	
	strand(time(0));
	n = rand() - RAND_MAZ / 2;
	printf("Last digit of %d is %d", n, n% 10);
