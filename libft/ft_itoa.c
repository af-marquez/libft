/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 17:05:28 by amarquez          #+#    #+#             */
/*   Updated: 2021/04/05 13:12:20 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nbrlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len ++;
	}
	if (n == 0)
	{
		len = 1;
		return (len);
	}
	while (n != '\0')
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*space;
	long	nn;

	nn = n;
	len = nbrlen(nn);
	space = malloc(sizeof(char) * (len + 1));
	if (!space)
		return (NULL);
	if (!n)
		space[0] = '0';
	space[len] = '\0';
	if (nn < 0)
	{
		space[0] = '-';
		nn = -nn;
	}
	while (nn)
	{
		space[--len] = nn % 10 + '0';
		nn = nn / 10;
	}
	return (space);
}
