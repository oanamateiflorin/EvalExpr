/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 16:23:01 by moana             #+#    #+#             */
/*   Updated: 2017/08/27 19:17:14 by moana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include "functions.h"

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
       		ft_putchar('\n');
		//printf("%s", eval_expr(av[1]));
    	}
    return (0);
}