/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:47:13 by jledesma          #+#    #+#             */
/*   Updated: 2022/09/25 12:04:21 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	check_param(int argc, char **argv, int *nstka, int *nstkb)
{
	long		i;
	long		j;

	i = 1;
	j = 0;
	if (argc < 2)
		free_exit(nstka, nstkb);
	while (i < argc)
	{
		if ((argv[i][ft_strlen(argv[i]) - 1] == ' ') || (argv[i][0] == ' '))
			free_exit_mess(nstka, nstkb);
		j = 0;
		while (j < ft_strlen(argv[i]))
		{
			if (((argv[i][j] < 48) || (argv[i][j] > 57)) && (argv[i][j] != 32))
			{
				if (argv[i][j] != 45)
					free_exit_mess(nstka, nstkb);
			}
			if ((argv[i][j] == 32) && (argv[i][j + 1] == 32))
				free_exit_mess(nstka, nstkb);
			j++;
		}
		i++;
	}
}

void	set_numbers(int argc, int *nstka, int *nstkb)
{
	nstka[0] = argc - 1;
	nstka[1] = nstka[0];
	*nstkb = 0;
}

void	isinteger(int argc, char **argv, int *nstka)
{
	long		i;
	long		j;
	long		tmp;

	i = 1;
	j = 0;
	while (i < argc)
	{
		tmp = ft_long_atoi(argv[i]);
		if (tmp > INT_MAX || tmp < INT_MIN)
		{
			write(1, "Error\n", 5);
			free(nstka);
			exit(0);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	long	*stka;
	long	*stkb;
	int		*nstka;
	int		*nstkb;

	nstka = (int *)malloc(2 * sizeof(int));
	nstkb = (int *)malloc(sizeof(int));
	check_param(argc, argv, nstka, nstkb);
	set_numbers(argc, nstka, nstkb);
	//isinteger(argc, argv, nstka);
	stka = (long *)malloc(sizeof(long) * stack_size(argc, argv));
	stkb = (long *)malloc(sizeof(long) * stack_size(argc, argv));
	if ((sep_iptn(stka, nstka, argv) == -1) || (stk_srt(stka, nstka) == 0))
		free_all_stacks(stka, stkb, nstka, nstkb);
	if ((nstka[1] == 2) && (stka[0] > stka[1]))
		rotate_stka(stka, nstka);
	else if (nstka[1] == 3)
		sort_3(stka, nstka);
	else if (nstka[1] == 5)
		sort_5(stka, stkb, nstka, nstkb);
	else
		sort_radix(stka, stkb, nstka, nstkb);
	free_all_stacks(stka, stkb, nstka, nstkb);
	return (0);
}
