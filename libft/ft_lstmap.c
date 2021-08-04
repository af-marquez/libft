/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 09:50:45 by amarquez          #+#    #+#             */
/*   Updated: 2021/04/06 15:05:51 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void*))
{
	t_list	*new_lst;
	t_list	*ptr;

	ptr = NULL;
	while (lst && f && del)
	{
		new_lst = ft_lstnew((*f)(lst -> content));
		if (!new_lst)
		{
			while (ptr)
			{
				new_lst = ptr -> next;
				(*del)(ptr -> content);
				free(ptr);
				ptr = new_lst;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&ptr, new_lst);
		lst = lst -> next;
	}
	return (ptr);
}
