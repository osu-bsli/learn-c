#include <stdio.h>
#include <assert.h>

/* TODO: define a struct with 3 integer variables (a, b, and c) */

int main (void)
{
	struct mystruct s;

	/* TODO: set the a, b, and c variables in s to 1, 2, and 3 */

	assert (s.a == 1);
	assert (s.b == 2);
	assert (s.c == 3);

	/* TODO: make a variable that's a pointer to s, called s_ptr */

	/* TODO: using s_ptr instead of s, set c to 0 */

	assert (s.c == 0);

	return 0;
}

