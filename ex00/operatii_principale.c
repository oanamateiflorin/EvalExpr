/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operatii_principale.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 18:13:45 by moana             #+#    #+#             */
/*   Updated: 2017/08/27 18:49:32 by moana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "functions.h"

int	operatii_principale(void)
{
	int r;
	int semn;

	r = verificare();
	while (crt() == '*' || crt() == '/' || crt() == '%')
	{
		semn = nxt();
		if (semn == '*')
			r = r * verificare();
		if (semn == '/')
			r = r / verificare();
		if (semn == '%')
			r = r % verificare();
	}
	return (r);
}
