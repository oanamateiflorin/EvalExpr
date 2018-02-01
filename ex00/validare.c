/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validare.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 17:14:31 by moana             #+#    #+#             */
/*   Updated: 2017/08/27 17:30:16 by moana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "functions.h"

int	ft_strlen(void)
{
	int i;

	i = 0;
	while (cp_str[i])
	{
		i++;
	}
	return (i);
}

char *ft_validare(void)
{
	int i;
	int j;
	char *str_val;

	i = 0;
	j = 0;
	str_val = (char*)malloc(sizeof(char) * ft_strlen() + 1);
	while (cp_str[i])
	{
		if (cp_str[i] != ' ')
		{
			str_val[j] = cp_str[i];
			j++;
		}
		i++;
	}
	str_val[j] = '\0';
	return (str_val);
}
