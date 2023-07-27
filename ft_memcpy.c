/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucakmak <mucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:32:54 by mucakmak          #+#    #+#             */
/*   Updated: 2023/07/12 11:39:46 by mucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_;
	const unsigned char	*src_;

	if (!dest && !src)
		return (0);
	i = 0;
	dest_ = (unsigned char *)dest;
	src_ = (const unsigned char *)src;
	while (i < n)
	{
		dest_[i] = src_[i];
		i++;
	}
	return (dest_);
}
