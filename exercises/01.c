#include <stdio.h>
#include <assert.h>

int main (void)
{
	int a = 486;
	int b = 830;
	int c = 0;

	c = add (a, b); /* TODO: make this function */

	assert (c == a + b);

	return 0;
}

