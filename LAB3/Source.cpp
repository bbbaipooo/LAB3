#include<stdio.h>
int main() {
	long int b = 0, n;
	scanf_s("%ld", &n);
	while (n > 9)
	{
		while (n > 9)
		{
			b = b + (n % 10);
			n = n / 10;
		}
		b = b + (n % 10);
		printf("%ld\n", b);
		n = b;
		b = 0;
	}
	return 0;
}