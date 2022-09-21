/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:30:01 by jledesma          #+#    #+#             */
/*   Updated: 2022/09/20 19:47:54 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
/* Sort 5 elements */

void	rotate_stka_radix(long *stka, int *nstka)
{
	rotate_stka(stka, nstka);
	rotate_stka(stka, nstka);
}

void	rr_rotate_stka_radix(long *stka, int *nstka)
{
	rr_stka(stka, nstka);
	rr_stka(stka, nstka);
}

void	first_stk(long *stka, long *stkb, int *nstka, int *nstkb)
{
	if (stka[0] > stkb[0])
	{
		push_stka(stka, stkb, nstka, nstkb);
	}
	else if ((stka[0] < stkb[0]) && (stka[1] > stkb[0]))
	{
		rotate_stka(stka, nstka);
		push_stka(stka, stkb, nstka, nstkb);
		rr_stka(stka, nstka);
	}
	else if ((stka[1] < stkb[0]) && (stka[2] > stkb[0]))
	{
		rr_stka(stka, nstka);
		push_stka(stka, stkb, nstka, nstkb);
		rr_stka(stka, nstka);
		rr_stka(stka, nstka);
	}
	else if (stka[2] < stkb[0])
	{
		push_stka(stka, stkb, nstka, nstkb);
		rotate_stka(stka, nstka);
	}
}

void	second_stk(long *stka, long *stkb, int *nstka, int *nstkb)
{
	if (stka[0] > stkb[0])
		push_stka(stka, stkb, nstka, nstkb);
	else if ((stka[0] < stkb[0]) && (stka[1] > stkb[0]))
	{
		rotate_stka(stka, nstka);
		push_stka(stka, stkb, nstka, nstkb);
		rr_stka(stka, nstka);
	}
	else if ((stka[1] < stkb[0]) && (stka[2] > stkb[0]))
	{
		rotate_stka(stka, nstka);
		push_stka(stka, stkb, nstka, nstkb);
		swp_stka(stka, nstka);
		rr_stka(stka, nstka);
	}
	else if ((stka[2] < stkb[0]) && (stka[3] > stkb[0]))
	{
		rr_stka(stka, nstka);
		push_stka(stka, stkb, nstka, nstkb);
		rotate_stka_radix(stka, nstka);
	}
	else if (stka[3] < stkb[0])
		parameters(stka, stkb, nstka, nstkb);
}

void	sort_5(long *stka, long *stkb, int *nstka, int *nstkb)
{
	push_stkb(stka, stkb, nstka, nstkb);
	push_stkb(stka, stkb, nstka, nstkb);
	sort_3(stka, nstka);
	while (*nstkb != 0)
	{
		if (nstka[1] == 3)
		{
			first_stk(stka, stkb, nstka, nstkb);
		}
		else if (nstka[1] == 4)
			second_stk(stka, stkb, nstka, nstkb);
	}
}
