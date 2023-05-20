#include <stdio.h>

int add(int, int);

/**
 * main - entry point
 *
 * Return: return 0
 */
int main(void)
{
	char a = 46;
	void *p = &a;
	/*int *q = &a;*/

	printf("void: %p\nsize: %lu\n", p, sizeof(p));
	/*printf("int: %p\nsize: %lu\n", q, sizeof(q)); */
	printf("The sum is %d.\n", add(3, 4));

	return (0);
}

/**
 * add - funtion to add two numbers
 * @x: first argument
 * @y: second argument
 *
 * Return: returns sum
 */
int add(int x, int y)
{
	return (x + y);
}


