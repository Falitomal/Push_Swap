/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:24:18 by jledesma          #+#    #+#             */
/*   Updated: 2022/09/18 17:14:32 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* Check the string is only numbers */
int	only_numbers(char *n)
{
	int	i;
	int	min;

	i = 0;
	min = 0;
	while (n[i])
	{
		if (n[i] == 45)
			min++;
		else if (ft_isdigit(n[i]) == 0)
			return (0);
		i++;
	}
	if (min > 1)
		return (0);
	return (1);
}

/* Check if stack is sorted */
int	stk_srt(long *stka, int *nstka)
{
	int		i;
	int		j;
	long	max;

	i = 1;
	j = 0;
	max = stka[0];
	while (i < nstka[1])
	{
		if (stka[i] > max)
		{
			max = stka[i];
			j++;
		}
		i++;
	}
	if (j == nstka[1] - 1)
		return (0);
	return (-1);
}

/* Compare sizes and allocate this size in memory */
void	realocate(long *pointer, int oldsize, int newsize)
{
	int		i;
	long	*temp;

	i = 0;
	if ((pointer != NULL) && (oldsize < newsize))
	{
		temp = malloc(sizeof(long) * (newsize));
		while (i < oldsize)
		{
			temp[i] = pointer[i];
			i++;
		}
		pointer = temp;
	}
	else if ((pointer != NULL) && (oldsize > newsize))
	{
		temp = malloc(sizeof(long) * (newsize));
		while (i < newsize)
		{
			temp[i] = pointer[i];
			i++;
		}
		pointer = temp;
	}
}

/* Check if numbers of stack oversize the limits */
int	n_limits(long *stka, int nstka)
{
	int	i;

	i = 0;
	while (i < nstka)
	{
		if ((stka[i] > 2147483647) || (stka[i] < -2147483648))
		{
			write(1, "Error Limits \n", 15);
			return (-1);
		}
		i++;
	}
	return (0);
}

/* Checks if repeated numbers in stack */
int	repet_n(long *stka, int nstka)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < nstka)
	{
		j = 0;
		while (j < nstka)
		{
			if ((i != j) && (stka[i] == stka[j]))
			{
				write(1, "Error repeat numbers\n", 22);
				return (-1);
			}
			j++;
		}
		i++;
	}
	return (0);
}
