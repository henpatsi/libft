#include "libft.h"
#include <stdio.h>

int test_puthex(int n)
{
	printf("num = %d, hex = %x\nft_puthex_fd = ", n, n);
	fflush(stdout);
	ft_puthex_fd(n, 0, 1);
	ft_putstr_fd("\n\n", 1);
}

int main(void)
{
	test_puthex(0);
	test_puthex(10);
	test_puthex(14);
	test_puthex(15);
	test_puthex(16);
	test_puthex(17);
	test_puthex(123);
	test_puthex(1234);
	test_puthex(12345);
	test_puthex(123456);
	test_puthex(-1);
}