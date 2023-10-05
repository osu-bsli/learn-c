#include <stdio.h>
#include <assert.h>

/* Adds the first 2 arrays, writing the result to the 3rd array. */
void add (int num_items, int *array1, int *array2, int *array3)
{
	for (int i = 0; i < num_items; i++)
	{
		int a = -1; /* TODO: set a to the i'th element of array1, using square brackets [] */
		int b = -1; /* TODO: set b to the i'th element of array2, without using square brackets [] */
		            /* HINT: look up "pointer arithmetic" */

		int c = a + b;

		/* TODO: set the i'th element of array3 to c */
	}
}

int main (void)
{
	int array1[5] = {0, 1, 2, 3, 4};
	int array2[5] = {5, 4, 3, 2, 1};
	int array3[5];

	/* TODO: call the add function on the arrays */

	for (int i = 0; i < sizeof (array1)/4; i++) {
		assert (array3[i] == array1[i] + array2[i]);
	}

	return 0;
}

