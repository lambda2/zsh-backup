/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 22:57:00 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/27 00:23:41 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

int	main(int argc, char *argv[])
{
	int	counter;
	int	fd;
	char buf[BUF_SIZE];
	char new_buf;
	size_t nbytes;
	ssize_t bytes_read;

	i = '\0';
	if ( argc == 1 )
	{
		ft_putstr ("usage : ");
		ft_putstr (argv[0]);
		ft_putstr (" file1\n");
	}
	else
	{
		counter = 0;
		fd = open(argv[1], O_RDONLY, 0);
		nbytes = sizeof(buf);
		while ( bytes_read > 0 )
		{
			counter++;
			bytes_read = read(fd, buf, nbytes);
			if ( bytes_read == BUF_SIZE )
			{
				ft_putstr("On va avoir besoin d'augmenter la taille du buffer...");
				new_buf = ft_memalloc (sizeof(char) * BUF_SIZE * counter);
				if ( new_buf )
				{

				}
				else
					ft_putstr ("Erreur lors de la reallocation du buffer");
			}
		}

	  while ( read(fd, &i, sizeof(int)) != EOF )
	  {
		printf("%c", i);
	  }
	  close(fd);
	}
	return (0);
}
