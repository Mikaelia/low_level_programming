#include <stdio.h>
/**
  *main - print first 50 fibonnact numbers
  *
  *
  *Return: 0
  */
int main(void)
{
	int i;
	long int sum = 3;
	long int oldsum = 2;
	long int prev = 1;

	printf("%ld, %ld, ", prev, oldsum);
	for (i = 2; i <= 50; i++)
	{
		sum = oldsum + prev;
		prev = oldsum;
		oldsum = sum;
		printf("%ld, ", sum);
	}
	printf("\n");
	return (0);
}
