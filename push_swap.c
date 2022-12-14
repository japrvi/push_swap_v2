/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:39:03 by jpozuelo          #+#    #+#             */
/*   Updated: 2022/11/17 19:06:38 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	mon_init(t_monitor *mon)
{
	mon->stack_a = NULL;
	mon->stack_b = NULL;
	mon->list = NULL;
	mon->List = NULL;
	mon->s_list = NULL;
	mon->amount = 0;
	mon->size = 0;
}

int	main(int argc, char **argv)
{
	t_monitor	mon;

	mon_init(&mon);
	init(argc, argv, &mon);
	set_up(&mon);
	//sorting(&mon);
}
