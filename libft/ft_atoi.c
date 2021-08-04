/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 11:25:40 by amarquez          #+#    #+#             */
/*   Updated: 2021/04/05 10:06:26 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	index;
	int	res;
	int	neg;

	index = 0;
	res = 0;
	neg = 1;
	while (str[index] == ' ' || (str[index] >= '\t' && str[index] <= '\r'))
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index++] == '-')
			neg = -1;
	}
	while (str[index] != '\0')
	{
		if (str[index] >= '0' && str[index] <= '9')
		{
			res *= 10;
			res += (str[index++] - '0');
		}
		else
			return (res * neg);
	}
	return (res * neg);
}
