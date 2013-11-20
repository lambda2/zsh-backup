
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "match.c"

int	main(int argc, char *argv[])
{
	if(argc)
	{
		printf ("[%s] [%s]...\n",argv[1],argv[2]);
		int res = match(argv[1], argv[2]);
		printf("\n[%s] -> %i", argv[1], res);
	}
	return 0;
}
