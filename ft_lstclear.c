/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucakmak <mucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:05:32 by mucakmak          #+#    #+#             */
/*   Updated: 2023/07/12 11:52:00 by mucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*start;
	t_list	*temp;

	if (!del)
		return ;
	start = *lst;
	while (start)
	{
		temp = start;
		del(temp->content);
		start = start->next;
		free(temp);
	}
	*lst = NULL;
}
