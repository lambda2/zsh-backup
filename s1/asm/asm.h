/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asm.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambda2 <aaubin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/21 00:16:44 by lambda2           #+#    #+#             */
/*   Updated: 2014/01/21 00:17:08 by lambda2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASM_H
# define ASM_H

# include "libft.h"
# include "get_next_line.h"
# include "op.h"

#define	READ_ERROR	-1

/*
** x is a numeric char
*/
#define	ISNUM(x)	((x) >= '0' && (x) <= '9')

/*
** x is an uppercase alpha hexa char
*/
#define	ISHMAX(x)	((x) >= 'A' && (x) <= 'F')

/*
** x is a lowercase alpha hexa char
*/
#define	ISHMIN(x)	((x) >= 'a' && (x) <= 'f')

/*
** x is a hexa char
*/
#define	ISHEX(x)	(ISNUM(x) || ISHMAX(x) || ISHMIN(x))

/*
** convert hexadecimal char x to decimal char
*/
#define	HEX_TO_DEC(x) (ISNUM(x) ? (x) - 48 : (ISHMIN(x) ? (x) - 87 : (x) - 55))

/*
** x is a sign (- or +)
*/
#define	IS_SIGN(x) ((x) == '-' || (x) == '+')

/*
** x is a space, a tab, or a separator char (defined in op.h)
*/
#define	IS_SPACE(x) ((x) == ' ' || (x) == '\t' || (x) == SEPARATOR_CHAR)

typedef	struct				s_instruction
{
	unsigned char			bin[20];
	int						size;
	char					code;
	char					type[MAX_ARGS_NUMBER];
	char					*argv[MAX_ARGS_NUMBER];
	struct s_instruction	*next;
}							t_instruction;

/*
** Will read the content of the ".s" file(s) contained in v (aka argv)
** and create their associated ".cor" hexa files.
*/
void						ft_read_sources(int c, char **v);

/*
** Will create the ".cor" file for the given ".s" file (by the path)
*/
int							ft_read_source(char *path);

/*
** Will malloc and init a new t_instruction
*/
t_instruction				*create_instruction(void);

/*
** Will decode the current line informations and put them into the given
** t_instruction structure.
*/
int							ft_decode_line(char *s, t_instruction *current);

/*
** An [asm] dedicaced strsplit. Will cut the given char on ' ', '\t' and
** SEPARATOR_CHAR.
*/
char						**ft_asmsplit(char const *s);


#endif /* !ASM_H */
