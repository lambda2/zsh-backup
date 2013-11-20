
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ft_range.c"

int	main(int argc, char *argv[])
{
	if(argc)
	{
		int	*tab;
		int	nb;
		int	counter;
		
		counter = 0;
		nb = atoi(argv[2]) - atoi(argv[1]);
		printf ("On va remplir un tableau de %i int\n", nb); 
		tab = ft_range(atoi(argv[1]), atoi(argv[2]));
		while( counter < nb )
		{
			printf("tab[%i] = %i\n",counter, tab[counter]);
			counter ++;
		}
	}
	return 0;
}
