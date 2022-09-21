/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 20:05:29 by jledesma          #+#    #+#             */
/*   Updated: 2022/09/20 20:19:17 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* Push in stack A */
void	push_stka(long *stka, long *stkb, int *nstka, int *nstkb)
{
	int	i;

	(nstka[1])++;
	i = nstka[1] - 1;
	while (i > 0)
	{
		stka[i] = stka[i - 1];
		i--;
	}
	stka[0] = stkb[0];
	i = 0;
	while (i < *nstkb)
	{
		stkb[i] = stkb[i + 1];
		i++;
	}
	(*nstkb)--;
	if (*nstkb == 0)
		stkb = NULL;
	write(1, "pa\n", 3);
}

/* Push in stack B */
void	push_stkb(long *stka, long *stkb, int *nstka, int *nstkb)
{
	int	i;

	(*nstkb)++;
	i = *nstkb - 1;
	while (i > 0)
	{
		stkb[i] = stkb[i - 1];
		i--;
	}
	stkb[0] = stka[0];
	i = 0;
	while (i < nstka[1])
	{
		stka[i] = stka[i + 1];
		i++;
	}
	(nstka[1])--;
	if (nstka[1] == 0)
		stka = NULL;
	write(1, "pb\n", 3);
}

void	parameters(long *stka, long *stkb, int *nstka, int *nstkb)
{
	push_stka(stka, stkb, nstka, nstkb);
	rotate_stka(stka, nstka);
}
