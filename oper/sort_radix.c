/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:35:55 by jledesma          #+#    #+#             */
/*   Updated: 2022/09/20 19:50:43 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_sec_stk(long *array, int *nstk)
{
	long	i;
	long	j;
	long	tmp;

	i = 0;
	j = 0;
	while (i < nstk[0])
	{
		j = i + 1;
		while (j < nstk[0])
		{
			if (array[i] > array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	swp_stk_1_time(long *copy, long *copy_swp_stka, long *stka, int *nstka)
{
	int		i;

	i = 0;
	while (i < nstka[0])
	{
		copy[i] = stka[i];
		copy_swp_stka[i] = stka[i];
		i++;
	}
}

void	swp_stk_2_time(long *copy, long *copy_swp_stka, long *stka, int *nstka)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < nstka[1])
	{
		j = 0;
		while (j < nstka[0])
		{
			if (copy_swp_stka[i] == copy[j])
				stka[i] = j;
			j++;
		}
		i++;
	}
}

void	swp_stk_3_time(long *stka, long *stkb, int *nstka, int *nstkb)
{
	int	max_number;
	int	max_bits;
	int	bucle_loop[2];

	max_number = nstka[1] - 1;
	max_bits = 0;
	bucle_loop[0] = 0;
	bucle_loop[1] = 0;
	while ((max_number >> max_bits) != 0)
		++max_bits;
	while (max_bits > bucle_loop[0])
	{
		bucle_loop[1] = 0;
		while (bucle_loop[1] < nstka[0])
		{
			if (((stka[0] >> bucle_loop[0]) & 1) == 1)
				rotate_stka(stka, nstka);
			else
				push_stkb(stka, stkb, nstka, nstkb);
			++bucle_loop[1];
		}
		while (*nstkb != 0)
			push_stka(stka, stkb, nstka, nstkb);
		++bucle_loop[0];
	}
}

void	sort_radix(long *stka, long *stkb, int *nstka, int *nstkb)
{
	long	*copy;
	long	*copy_swap_stka;

	copy = (long *)malloc(nstka[0] * sizeof(long));
	copy_swap_stka = (long *)malloc(nstka[0] * sizeof(long));
	swp_stk_1_time(copy, copy_swap_stka, stka, nstka);
	sort_sec_stk(copy, nstka);
	swp_stk_2_time(copy, copy_swap_stka, stka, nstka);
	free(copy);
	free(copy_swap_stka);
	swp_stk_3_time(stka, stkb, nstka, nstkb);
}
