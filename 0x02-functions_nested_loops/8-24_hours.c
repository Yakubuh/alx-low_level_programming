#include "stdio.h"
/**
 * jack_bauer - main thing
 *
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			printf(i / 10 + '0');
			printf(i % 10 + '0');
			printf(':');
			printf(j / 10 + '0');
			printf(j % 10 + '0');
			printf('\n');
		}
	}
}
