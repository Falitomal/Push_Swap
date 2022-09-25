/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:51:40 by jledesma          #+#    #+#             */
/*   Updated: 2022/09/25 17:53:53 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* Reverse stack A */
void	rr_stka(long *stka, int *nstka)
{
	int		i;
	long	*tmp;

	i = nstka[1] - 1;
	tmp = (long *)malloc(sizeof(long));
	*tmp = stka[nstka[1] - 1];
	while (i > 0)
	{
		stka[i] = stka[i - 1];
		i--;
	}
	stka[0] = *tmp;
	free(tmp);
	write(1, "rra\n", 4);
}

/* Reverse stack B */
void	rr_stkb(long *stkb, int *nstkb)
{
	int		i;
	long	*tmp;

	i = nstkb[1] - 1;
	tmp = (long *)malloc(sizeof(long));
	*tmp = stkb[nstkb[1] - 1];
	while (i > 0)
	{
		stkb[i] = stkb[i - 1];
		i--;
	}
	stkb[0] = *tmp;
	free(tmp);
	write(1, "rrb\n", 4);
}

/* Reverse stack A y B */
void	rr_stkab(long *stka, long *stkb, int *nstka, int *nstkb)
{
	int		i;
	long	*tmp;

	i = nstka[1] - 1;
	tmp = (long *)malloc(sizeof(long));
	*tmp = stka[nstka[1] - 1];
	while (i > 0)
	{
		stka[i] = stka[i - 1];
		i--;
	}
	stka[0] = *tmp;
	i = 0;
	i = nstkb[1] - 1;
	*tmp = stkb[nstkb[1] - 1];
	while (i > 0)
	{
		stkb[i] = stkb[i - 1];
		i--;
	}
	stkb[0] = *tmp;
	free(tmp);
	write(1, "rrr\n", 4);
}
