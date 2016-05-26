/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghavenga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 16:02:25 by ghavenga          #+#    #+#             */
/*   Updated: 2016/05/13 10:39:57 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, void *src, size_t len)
{
	char	*temp;
	char	*copy;
	size_t	k;

	k = 0;
	temp = ft_memalloc(len);
	copy = (char *)dst;
	while (k < len)
	{
		temp[k] = ((char *)src)[k];
		k++;
	}
	while (len > 0)
	{
		len--;
		copy[len] = temp[len];
	}
	return (dst);
}
