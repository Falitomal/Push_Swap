/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 20:02:39 by jledesma          #+#    #+#             */
/*   Updated: 2022/09/25 11:55:33 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <errno.h>
# include <limits.h>

/*------------*/
/* Utils */
/*------------*/

/* push_swap.c */
void	check_param(int argc, char **argv, int *nstka, int *nstkb);
void	set_numbers(int argc, int *nstka, int *nstkb);

/* free.c */
void	free_string(char **str);
void	free_all_stacks(long *stka, long *stkb, int *nstka, int *nstkb);
void	free_exit(int *nstka, int *nstkb);
void	free_exit_mess(int *nstka, int *nstkb);

/* utils.c */
long	only_numbers(char *n);
long	stk_srt(long *stka, int *nstka);
void	realocate(long *pointer, int oldsize, int newsize);
long	n_limits(long *stka, int nstka);
long	repet_n(long *stka, int nstka);

/* libft.c */
int		ft_strlen(const char *str);
int		ft_isdigit(int i);
int		ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
long	ft_long_atoi(const char *str);

/* Checkers tests */
void	isinteger(int argc, char **argv, int *nstka);
/*------------*/
/* Operations */
/*------------*/

/* rotate.c */
void	rotate_stka(long *stka, int *nstka);
void	rotate_stkb(long *stka, int *nstka);
void	rotate_stkab(long *stka, long *stkb, int *nstka, int *nstkb);

/* swap.c */
void	swp_stka(long *stka, int *nstka);
void	swp_stkb(long *stkb, int *nstkb);
void	swp_stkab(long *stka, long *stkb, int *nstka, int *nstkb);

/* reverse.c */
void	rr_stka(long *stka, int *nstka);
void	rr_stkb(long *stkb, int *nstkb);
void	rr_stkab(long *stka, long *stkb, int *nstka, int *nstkb);

/* push.c */
void	push_stka(long *stka, long *stkb, int *nstka, int *nstkb);
void	push_stkb(long *stka, long *stkb, int *nstka, int *nstkb);
void	parameters(long *stka, long *stkb, int *nstka, int *nstkb);

/* separate.c */
long	n_input(long *stka, int *nstka, char **argv, char **n_list);
int		stand_input(long *stka, int *nstka, char **argv);
int		stack_size(int argc, char **argv);
int		sep_iptn(long *stka, int *nstka, char **argv);

/* sort_3 */
void	sort_3(long *stka, int *nstka);

/* sort_5 */
void	rotate_stka_radix(long *stka, int *nstka);
void	rr_rotate_stka_radix(long *stka, int *nstka);
void	first_stk(long *stka, long *stkb, int *nstka, int *nstkb);
void	second_stk(long *stka, long *stkb, int *nstka, int *nstkb);
void	sort_5(long *stka, long *stkb, int *nstka, int *nstkb);

/* sort_radix */
void	sort_sec_stk(long *array, int *nstk);
void	swp_stk_1_time(long *copy, long *copy_swp_stka, long *stka, int *nstka);
void	swp_stk_2_time(long *copy, long *copy_swp_stka, long *stka, int *nstka);
void	swp_stk_3_time(long *stka, long *stkb, int *nstka, int *nstkb);
void	sort_radix(long *stka, long *stkb, int *nstka, int *nstkb);
#endif