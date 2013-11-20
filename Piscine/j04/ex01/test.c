
#include <stdlib.h>
#include "../../Toolbox/ft_putchar.c"
#include "../../Toolbox/ft_putnbr.c"
#include "ft_recursive_factorial.c"

int	main(int argc, char *argv[])
{
	if(argc)
	{
		int m = ft_recursive_factorial(atoi(argv[1]));
		ft_putnbr(m);
	}
	return 0;
}
