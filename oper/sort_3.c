/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:03:31 by jledesma          #+#    #+#             */
/*   Updated: 2022/09/20 19:53:44 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* Sort 3 elements */
void	sort_3(long *stka, int *nstka)
{
	if ((stka[1] < stka[2]) && (stka[0] < stka[2]) && (stka[0] > stka[1]))
		swp_stka(stka, nstka);
	if ((stka[1] > stka[2]) && (stka[0] > stka[2]) && (stka[0] > stka[1]))
	{
		swp_stka(stka, nstka);
		rr_stka(stka, nstka);
	}
	if ((stka[0] > stka[1]) && (stka[1] < stka[2]) && (stka[0] > stka[2]))
		rotate_stka(stka, nstka);
	if ((stka[0] < stka[1]) && (stka[1] > stka[2]) && (stka[0] < stka[2]))
	{
		swp_stka(stka, nstka);
		rotate_stka(stka, nstka);
	}
	if ((stka[0] < stka[1]) && (stka[1] > stka[2]) && (stka[0] > stka[2]))
		rr_stka(stka, nstka);
}
