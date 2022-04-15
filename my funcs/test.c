// 4

// *
// **
// ***
// ****
// ***
// **
// *

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
	int	i = 40;
	int j = 1;
	int	jtmp = 0;
	bool x = true;

	
		while (j != i + 1)
		{
			jtmp = j;
				while (j--)
				write(1, "*", 1);
			jtmp++;
			j = jtmp;
			write(1, "\n", 1);
		}
		i--;
		while (i > 0)
		{
			j = i;
			while (j--)
				write(1, "*", 1);
			write(1, "\n", 1);
			i--;
		}
}
