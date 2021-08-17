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
