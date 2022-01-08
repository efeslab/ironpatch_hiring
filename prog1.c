#include <stdio.h>

long g_magic_number = 42;

void my_print(long n)
{
	if (n < 0) {
		putchar('-');
		n = -n;
	}

	if (n/10)
		my_print(n/10);

	putchar(n%10 + '0');
}

int main()
{
	long in = getchar();
	if (in % 2 == 0) {
		my_print(in * g_magic_number);
	}
	else {
		my_print(in + g_magic_number);
	}
	return 0;
}
