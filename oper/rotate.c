/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 20:05:55 by jledesma          #+#    #+#             */
/*   Updated: 2022/09/20 20:19:57 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* Rotate Stack A */
void	rotate_stka(long *stka, int *nstka)
{
	int		i;
	long	*tmp;

	i = 0;
	tmp = (long *)malloc(sizeof(long));
	*tmp = stka[0];
	while (i < nstka[1])
	{
		stka[i] = stka[i + 1];
		i++;
	}
	stka[nstka[1] - 1] = *tmp;
	free(tmp);
	write(1, "ra\n", 3);
}

/* Rotate Stack B */
void	rotate_stkb(long *stkb, int *nstkb)
{
	int		i;
	long	*tmp;

	i = 0;
	tmp = (long *)malloc(sizeof(long));
	*tmp = stkb[0];
	while (i < nstkb[1])
	{
		stkb[i] = stkb[i + 1];
		i++;
	}
	stkb[nstkb[1] - 1] = *tmp;
	free(tmp);
	write(1, "rb\n", 3);
}

/* Rotate Stack a and b */
void	rotate_stkab(long *stka, long *stkb, int *nstka, int *nstkb)
{
	int		i;
	long	*tmp;

	i = 0;
	tmp = (long *)malloc(sizeof(long));
	*tmp = stka[0];
	while (i < nstka[1])
	{
		stka[i] = stka[i + 1];
		i++;
	}
	stkb[nstkb[1] - 1] = *tmp;
	free(tmp);
	i = 0;
	tmp = (long *)malloc(sizeof(long));
	*tmp = stkb[0];
	while (i < nstkb[1])
	{
		stkb[i] = stkb[i + 1];
		i++;
	}
	stkb[nstkb[1] - 1] = *tmp;
	free(tmp);
	write(1, "rr\n", 3);
}
