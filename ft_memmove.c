/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucakmak <mucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:03:20 by mucakmak          #+#    #+#             */
/*   Updated: 2023/07/12 11:39:21 by mucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest_;
	unsigned char	*src_;

	i = 0;
	dest_ = (unsigned char *)dest;
	src_ = (unsigned char *)src;
	if (!dest && !src)
		return (0);
	if (dest > src)
		while (n--)
			dest_[n] = src_[n];
	else
	{
		while (i < n)
		{
			dest_[i] = src_[i];
			i++;
		}
	}
	return (dest);
}
