/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verificare.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 18:18:05 by moana             #+#    #+#             */
/*   Updated: 2017/08/27 19:06:40 by moana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "functions.h"

int	verificare(void)
{
	int r;

	if (crt() >= '0' && crt() <= '9')
	{
		return (nbr());
	}
	else if (crt() == '(')
	{
		nxt();
		r = operatii_secundare();
		nxt();
		return (r);
	}
	else if (crt() == '-')
	{
		nxt();
		return (-verificare());
	}
	return (0);
}

int	nbr(void)
{
	int r;

	r = nxt() - '0';
	while (crt() >= '0' && crt() <= '9')
	{
		r = r * 10 + nxt() - '0';
	}
	return (r);
}
