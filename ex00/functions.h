/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_evalexpr.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 16:54:12 by moana             #+#    #+#             */
/*   Updated: 2017/08/27 19:07:44 by moana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FUNCTIONS_H
 #define __FUNCTIONS_H

# include <unistd.h>
# include <stdlib.h>

char	*cp_str;
int eval_expr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nr);
char	*ft_validare();
char	nxt();
char	crt();
int	verificare();
int	operatii_principale();
int	operatii_secundare();
int	nbr();
#endif
