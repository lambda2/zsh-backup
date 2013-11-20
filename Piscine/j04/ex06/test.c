
#include <stdlib.h>
#include "../../Toolbox/ft_putchar.c"
#include "../../Toolbox/ft_putnbr.c"
#include "ft_is_prime.c"

int	main(int argc, char *argv[])
{
	if(argc)
	{
		int m = ft_is_prime(atoi(argv[1]));
		ft_putnbr(m);
	}
	return 0;
}
