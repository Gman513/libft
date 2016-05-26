/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghavenga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 15:46:28 by ghavenga          #+#    #+#             */
/*   Updated: 2016/05/12 09:18:14 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(void *s, int c, size_t n)
{
	size_t	k;
	char	*string;

	k = 0;
	string = (char *)s;
	while (k <= n)
	{
		if (string[0] == (unsigned char)c)
			return (string);
		k++;
		string++;
	}
	return (NULL);
}
