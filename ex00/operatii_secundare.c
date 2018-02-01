/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operatii_secundare.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 18:11:04 by moana             #+#    #+#             */
/*   Updated: 2017/08/27 19:22:49 by moana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "functions.h"

int	operatii_secundare(void)
{
	int r;

	r = operatii_principale();
	while (crt() == '+' || crt() == '-')
	{
		if (nxt() == '+')
			r = r + operatii_principale();
		else
			r = r - operatii_principale();
	}
	return(r);
}
