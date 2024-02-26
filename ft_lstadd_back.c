/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaksimo <mmaksimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:50:21 by mmaksimo          #+#    #+#             */
/*   Updated: 2024/02/26 13:06:51 by mmaksimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	node = *lst;
	if (node == NULL)
	{
		new->next = NULL;
		*lst = new;
		return ;
	}
	while (node != NULL)
	{
		if (node->next == NULL)
			break ;
		node = node->next;
	}
	node->next = new;
	new->next = NULL;
}
