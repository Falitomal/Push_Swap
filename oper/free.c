/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:19:36 by jledesma          #+#    #+#             */
/*   Updated: 2022/09/17 14:51:45 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* Free all stacks */
void	free_all_stacks(long *stka, long *stkb, int *nstka, int *nstkb)
{
	free(stka);
	free(stkb);
	free(nstka);
	free(nstkb);
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
	free(nstka);
	free(nstkb);
	exit(0);
}

void	free_exit_mess(int *nstka, int *nstkb)
{
	free(nstka);
	free(nstkb);
	write(1, "Error", 5);
	exit(0);
}
