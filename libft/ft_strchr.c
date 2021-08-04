/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_strchr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 11:25:39 by amarquez          #+#    #+#             */
/*   Updated: 2021/04/05 15:03:24 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	unsigned int	index;
	char			*str1;

	str1 = (char *)str;
	index = 0;
	while (*(str1 + index))
	{
		if (*(str1 + index) == (char)ch)
			return ((str1 + index));
		index++;
	}
	if (ch == 0)
		return ((str1 + index));
	return (NULL);
}
