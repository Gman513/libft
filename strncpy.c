/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghavenga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 13:34:38 by ghavenga          #+#    #+#             */
/*   Updated: 2016/05/14 12:28:17 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	k;

	k = 0;
	while (src[k] != '\0' && k <= len)
	{
		dst[k] = src[k];
		k++;
	}
	while (k <= len)
	{
		dst[k] = '\0';
		k++;
	}
	return (dst);
}
