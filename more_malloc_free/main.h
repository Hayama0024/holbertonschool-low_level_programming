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
	char *_strdup(char *str);
	char *str_concat(char *s1, char *s2);
	int **alloc_grid(int width, int height);
	void free_grid(int **grid, int height);
	void *malloc_checked(unsigned int b);
	char *string_nconcat(char *s1, char *s2, unsigned int n);
	void *_calloc(unsigned int nmemb, unsigned int size);
#endif
