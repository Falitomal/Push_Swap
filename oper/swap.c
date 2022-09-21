/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 20:05:50 by jledesma          #+#    #+#             */
/*   Updated: 2022/09/20 20:20:26 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*
exchanges the first two elements on top of the stack a.
It does nothing if there are one or fewer elements.
nothing if there are one or fewer elements.
*/
void	swp_stka(long *stka, int *nstka)
{
	long	*tmp;

	tmp = (long *)malloc(sizeof(long));
	if (nstka[1] > 1)
	{
		tmp[0] = stka[0];
		stka[0] = stka[1];
		stka[1] = tmp[0];
	}	
	free(tmp);
	write(1, "sa\n", 3);
}

/*
exchanges the first two elements on top of the stack b.
It does nothing if there are one or fewer elements.
nothing if there are one or fewer elements.
*/
void	swp_stkb(long *stkb, int *nstkb)
{
	long	*tmp;

	tmp = (long *)malloc(sizeof(long));
	if (nstkb[1] > 1)
	{
		tmp[0] = stkb[0];
		stkb[0] = stkb[1];
		stkb[1] = tmp[0];
	}	
	free(tmp);
	write(1, "sa\n", 3);
}

/* swap both stka and stkb */
void	swp_stkab(long *stka, long *stkb, int *nstka, int *nstkb)
{
	long	*tmp;

	tmp = (long *)malloc(sizeof(long));
	if (nstka[1] > 1)
	{
		tmp[0] = stka[0];
		stka[0] = stka[1];
		stka[1] = tmp[0];
	}	
	if (nstkb[1] > 1)
	{
		tmp[0] = stkb[0];
		stkb[0] = stkb[1];
		stkb[1] = tmp[0];
	}	
	free(tmp);
	write(1, "ss\n", 3);
}
