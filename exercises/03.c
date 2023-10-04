#include <stdio.h>
#include <assert.h>

int main (void)
{
	int a = 123;
	int b = 456;
	int c = 0;
	
	add (&a, &b, &c); /* TODO: create add function that puts result in c */
	assert (c == a + b);
	
	return 0;
}

