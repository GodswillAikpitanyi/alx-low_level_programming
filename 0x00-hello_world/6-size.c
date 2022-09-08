#include<stdio.h>
/**
 * main-is the entry point for the program
 *
 * Return: zero if no error, N0n-zero value if errors.
 */
int main(void)
{
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of long: %ld byte(s)\n", sizeof(long));
	printf("Size of long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of float: %ld byte(s)\n", sizeof(float));
		return (0);
}
