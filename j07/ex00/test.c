
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ft_strdup.c"

int	main(int argc, char *argv[])
{
	if(argc)
	{
		char	*to_fill;
		printf ("On va dupliquer [%s] et mettre la copie dans [%s]",argv[1], to_fill);
		to_fill = ft_strdup(argv[1]);
		printf ("\nOn obtient l'original [%s] dupliqué dans [%s]",argv[1], to_fill);
		
		printf ("\n -------- EXPECTED -------- \n");

		printf ("On va dupliquer [%s] et mettre la copie dans [%s]",argv[1], to_fill);
		to_fill = strdup(argv[1]);
		printf ("\nOn obtient l'original [%s] dupliqué dans [%s]",argv[1], to_fill);
		
	}
	return 0;
}
