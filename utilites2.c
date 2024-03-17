/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 21:45:55 by hbettal           #+#    #+#             */
/*   Updated: 2024/03/17 21:28:45 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	double_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

char	*get_str(t_var	var, int ac, char **av)
{
	while (++var.i < ac)
	{
		var.tmp = var.str;
		var.str = ft_strjoin(var.str, av[var.i]);
	}
	return (var.str);
}