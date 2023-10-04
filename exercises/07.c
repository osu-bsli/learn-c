#include <stdio.h>
#include <assert.h>
#include <stdint.h> /* why is stdint.h useful? what's wrong with regular ints? */

/* TODO: create a "fill" function that sets all elements of a buffer (unsigned char array) to a certain value */

int main (void)
{
	unsigned char buffer1[64];
	unsigned char buffer2[256];
	unsigned char buffer3[1024];

	/* TODO: use the function to fill buffer1 with the character 'a' */

	/* TODO: use the function to fill buffer1 with the character 'b', using its decimal value (look up an ASCII table) */

	/* TODO: use the function to fill buffer1 with the character 'c', using its hex value */

	for (int i = 0; i < sizeof (buffer1); i++)
	{
		assert (buffer1[i] == 'a');
	}

	for (int i = 0; i < sizeof (buffer2); i++)
	{
		assert (buffer2[i] == 'b');
	}

	for (int i = 0; i < sizeof (buffer3); i++)
	{
		assert (buffer3[i] == 'c');
	}

	/* TODO: use the function to clear all the buffers */

	for (int i = 0; i < sizeof (buffer1); i++)
	{
		assert (buffer1[i] == 0x00u);
	}

	for (int i = 0; i < sizeof (buffer2); i++)
	{
		assert (buffer2[i] == 0x00u);
	}

	for (int i = 0; i < sizeof (buffer3); i++)
	{
		assert (buffer3[i] == 0x00u);
	}

	return 0;
}

