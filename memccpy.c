/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghavenga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 15:24:44 by ghavenga          #+#    #+#             */
/*   Updated: 2016/05/13 10:34:17 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	k;
	char	*srccast;
	char	*dstcast;

	srccast = (char	*)src;
	dstcast = (char *)dst;
	k = 0;
	while (srccast[k] != '\0' && k <= n)
	{
		dstcast[0] = srccast[k];
		if (dstcast[0] == (unsigned char)c)
			return (++dstcast);
		dstcast++;
		k++;
	}
	return (NULL);
}
