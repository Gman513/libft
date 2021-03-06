/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghavenga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 15:12:58 by ghavenga          #+#    #+#             */
/*   Updated: 2016/05/14 15:11:33 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	size_t	k;
	char	*pos;

	k = 0;
	pos = (char *)b;
	while (k <= len)
	{
		pos[k] = c;
		k++;
	}
	return (pos);
}
