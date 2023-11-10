#include "libft.h"
#include <stdio.h>

int test_puthex(int n)
{
	printf("num = %d, hex = %x\nft_puthex_fd = ", n, n);
	fflush(stdout);
	ft_puthex_fd(n, 0, 1);
	ft_putstr_fd("\n\n", 1);

	return (0);
}

int	puthex_tests(void)
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

	return (0);
}

int	test_putaddr(void *ptr)
{
	printf("ptr addr = %p\nft_putaddr = ", ptr);
	fflush(stdout);
	ft_putaddr_fd(ptr, 1);
	ft_putstr_fd("\n\n", 1);

	return (0);
}

int	putaddr_tests(void)
{
	test_putaddr((void *)0);
	test_putaddr("hello");
	test_putaddr((void *)0x123456789);
	test_putaddr((void *)0xffffffffffffffff);

	return (0);
}

int main(void)
{
	puthex_tests();
	putaddr_tests();
}