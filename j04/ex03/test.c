
#include <stdlib.h>
#include "../../Toolbox/ft_putchar.c"
#include "../../Toolbox/ft_putnbr.c"
#include "ft_recursive_power.c"

int	main(int argc, char *argv[])
{
	if(argc)
	{
		int m = ft_recursive_power(atoi(argv[1]), atoi(argv[2]));
		ft_putnbr(m);
	}
	return 0;
}