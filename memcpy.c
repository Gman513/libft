/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghavenga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 16:14:00 by ghavenga          #+#    #+#             */
/*   Updated: 2016/05/13 10:30:02 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	k;
	char	*srccast;
	char	*dstcast;

	srccast = (char *)src;
	dstcast = (char *)dst;
	k = -1;
	while (++k < n)
		dstcast[k] = srccast[k];
	return (dst);
}
