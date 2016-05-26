/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghavenga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 09:13:57 by ghavenga          #+#    #+#             */
/*   Updated: 2016/05/14 15:19:43 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(char *big, char *little, size_t len)
{
	char	*start;
	int		length;
	size_t	k;
	size_t	l;

	l = 0;
	k = 0;
	length = 0;
	if (ft_strlen(little) == 0)
		return (big);
	while (big[k] != '\0' && k <= len)
	{
		if (little[l] == big[k])
		{
			if (l == 0)
				start = &big[k];
			l++;
		}
		else
			l = 0;
		if (l == len)
			return (start);
		k++;
	}
	return (start);
}
