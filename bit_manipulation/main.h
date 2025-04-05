#ifndef HAIN_H
#define HAIN_H
	int _putchar(char c);
	void _puts_recursion(char *s);
	void _print_rev_recursion(char *s);
	int _strlen_recursion(char *s);
	int factorial(int n);
	int _pow_recursion(int x, int y);
	int _sqrt_recursion(int n);
	int is_prime_number(int n);
	char *create_array(unsigned int size, char c);
	unsigned int binary_to_uint(const char *b);
	void print_binary(unsigned long int n);
	int set_bit(unsigned long int *n, unsigned int index);
	int clear_bit(unsigned long int *n, unsigned int index);
	unsigned int flip_bits(unsigned long int n, unsigned long int m);
#endif
