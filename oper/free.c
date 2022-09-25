/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:19:36 by jledesma          #+#    #+#             */
/*   Updated: 2022/09/25 13:07:10 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* Free all stacks */
void	free_all_stacks(long *stka, long *stkb, int *nstka, int *nstkb)
{
	stka = NULL;
	stkb = NULL;
	nstka = NULL;
	nstkb = NULL;
	if (stka)
		free(stka);
	if (stkb)
		free(stkb);
	if (nstka)
		free(nstka);
	if (nstkb)
		free(nstkb);
	exit(0);
}

/* Free characters  */
void	free_string(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
}

void	free_exit(int *nstka, int *nstkb)
{
	nstka = NULL;
	nstkb = NULL;
	if (nstka)
		free(nstka);
	if (nstkb)
		free(nstkb);
	exit(0);
}

void	free_exit_mess(int *nstka, int *nstkb)
{
	nstka = NULL;
	nstkb = NULL;
	if (nstka)
		free(nstka);
	if (nstkb)
		free(nstkb);
	write(1, "Error", 5);
	exit(0);
}
