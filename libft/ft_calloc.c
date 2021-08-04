/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:35:38 by amarquez          #+#    #+#             */
/*   Updated: 2021/04/06 14:20:53 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*new;
	size_t	index;

	index = 0;
	new = malloc(count * size);
	if (new == 0)
		return (NULL);
	while (index < count * size)
	{
		new[index] = 0;
		index++;
	}
	return (new);
}
