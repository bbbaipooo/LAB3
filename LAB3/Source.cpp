void one()
{
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
}

void two()
{
#include<stdio.h>
	int main() {
		int a = 2, b = 1, c = 0;
		printf("1 ");
		while (a <= 10000)
		{
			while (a / 2 >= b)
			{
				if (a % b == 0)
				{
					c = c + b;
				}
				b++;
			}
			if (a == c)
				printf("%d ", a);
			a++;
			c = 0;
			b = 1;
		}
		return 0;
	}
}
void three()
{
#include<stdio.h>
	int main() {
		int n;
		scanf_s("%d", &n);
		for (int y = 1; y <= (2 * n) - 1; y++)
		{
			for (int x = 1; x <= (2 * n) - 1; x++)
			{
				if (x > y && (x + y) <= (n * 2) - 1)
				{
					printf(" ");
				}
				else if (x < y && (x + y) >= (n * 2 + 1))
				{
					printf(" ");
				}
				else
				{
					printf("*");
				}
			}
			printf("\n");
		}
		return 0;
	}
}
