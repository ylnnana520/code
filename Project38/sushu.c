#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int prime(int prime_numbers[], int n);
int main()
{
	int c=0;
	int prime_numbers[1000] = { 0 };
	prime(prime_numbers, 1000);
	scanf("%d", &c);

	for (int a = 0; a < 1000; a++)
	{
		for (int b = a; b < 1000; b++)
		{
			if (prime_numbers[a] + prime_numbers[b] == c)
			{
				printf("%d=%d+%d\n", c, prime_numbers[a], prime_numbers[b]);
			}
		}
	}
	return 0;
}
int prime(int prime_number[], int n) {
	int count = 0;
	for (int num = 2; num <= n; num++) {
		int is_prime = 1;
		for (int i = 2; i <= num / 2; i++) {
			if (num % i == 0) {
				is_prime = 0;
				break;
			}
		}
		if (is_prime) {
			prime_number[count++] = num;
		}
	}
	prime_number[count] = 0; // Mark the end of the array
	return 0;
}