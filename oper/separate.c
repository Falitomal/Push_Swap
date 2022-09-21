/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   separate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:36:18 by jledesma          #+#    #+#             */
/*   Updated: 2022/09/18 17:13:39 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* check numbers in input  */
int	n_input(long *stka, int *nstka, char **argv, char **n_list)
{
	int		i;
	int		numbers;

	i = 0;
	numbers = 0;
	n_list = ft_split(argv[1], 32);
	while (n_list[i])
	{
		numbers++;
		i++;
	}
	nstka[0] = numbers;
	nstka[1] = nstka[0];
	i = 0;
	while (i < nstka[0])
	{
		stka[i] = ft_atoi(n_list[i]);
		i++;
	}
	free_string(n_list);
	free(n_list);
	return (0);
}

/* Size of stack */
int	stack_size(int argc, char **argv)
{
	int		i;
	int		size;

	i = 0;
	size = 1;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == 32)
				size++;
			i++;
		}
	}
	else
		size = argc - 1;
	return (size);
}

int	stand_input(long *stka, int *nstka, char **argv)
{
	int	i;

	i = 0;
	while (i < nstka[1])
	{
		if (only_numbers(argv[i + 1]) == 1)
			stka[i] = ft_atoi(argv[i + 1]);
		else
		{
			write(1, "Error NO numbers\n", 18);
			return (-1);
		}
		i++;
	}
	return (0);
}

/* check all validations, no repeats, not oversize limit*/
int	sep_iptn(long *stka, int *nstka, char **argv)
{
	char	**nlist;

	nlist = NULL;
	if (nstka[0] == 1)
	{
		if (n_input(stka, nstka, argv, nlist) == -1)
			return (-1);
	}
	else
	{
		if (stand_input(stka, nstka, argv) == -1)
			return (-1);
	}
	if (repet_n(stka, nstka[1]) == -1)
		return (-1);
	if (n_limits(stka, nstka[1]) == -1)
		return (-1);
	return (0);
}
