/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambda2 <aaubin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/21 00:16:44 by lambda2           #+#    #+#             */
/*   Updated: 2014/01/21 00:17:08 by lambda2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

t_instruction		*create_instruction(void)
{
	t_instruction	*inst;

	inst = (t_instruction *)ft_memalloc(sizeof(t_instruction));
	if (inst)
	{
		inst->next = NULL;
	}
	return (inst);
}
