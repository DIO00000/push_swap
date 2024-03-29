/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:49:25 by hbettal           #+#    #+#             */
/*   Updated: 2024/03/20 23:46:46 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	sort_check(t_list *stack_a, t_list *stack_b)
{
	t_list	*tmp;

	if (stack_b != NULL)
		(write(1, "KO\n", 3), exit(0));
	tmp = stack_a;
	while (tmp->next)
	{
		if (tmp->num > tmp->next->num)
			(write(1, "KO\n", 3), exit(0));
		tmp = tmp->next;
	}
	write(1, "OK\n", 3);
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (ac > 1)
	{
		args_check(ac, av, &a);
		do_move(&a, &b);
		sort_check(a, b);
	}
}
