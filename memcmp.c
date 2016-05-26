/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghavenga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 07:33:33 by ghavenga          #+#    #+#             */
/*   Updated: 2016/05/13 11:25:19 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			k;
	unsigned char	*temp1;
	unsigned char	*temp2;

	k = 0;
	temp1 = (unsigned char *)s1;
	temp2 = (unsigned char *)s2;
	if (!temp1 || !temp2)
		return (0);
	while (k++ <= n)
	{
		if (temp1[0] != temp2[0])
			return ((unsigned char)temp1[0] - (unsigned char)temp2[0]);
		temp1++;
		temp2++;
	}
	return (0);
}
