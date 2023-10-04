#include <stdio.h>
#include <assert.h>

struct rocket {
	float altitude;
};

void init_rocket (struct rocket *r)
{
	/* TODO: set rocket's altitude to 0.0 */
}

/* TODO: create a process_rocket function that adds 1.0 to a rocket's altitude */

int main (void)
{
	/* TODO: create an array of 100 rockets */
	
	/* TODO: initialize the rockets */

	/* TODO: update all the rockets 50 times */

	for (int i = 0; i < 100; i++)
	{
		assert (rockets[i].altitude > 49.999 && rockets[i].altitude <= 50.001);
		/* what does this check do? why can't we just check if rockets[i].altitude == 50.0 ? look it up */
	}

	return 0;
}

