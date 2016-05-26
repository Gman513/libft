/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghavenga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 13:25:59 by ghavenga          #+#    #+#             */
/*   Updated: 2016/05/20 14:49:39 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(char *big, char *little)
{
	char	*start;
	size_t	k;
	size_t	l;

	l = 0;
	k = 0;
	if (ft_strlen(little) == 0)
		return (big);
	while (big[k] != '\0')
	{
		if (little[l] == big[k])
		{
			if (l == 0)
				start = &big[k];
			l++;
		}
		else
			l = 0;
		if (l == ft_strlen(little))
			return (start);
		k++;
	}
	return (NULL);
}
