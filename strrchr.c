/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghavenga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 15:02:22 by ghavenga          #+#    #+#             */
/*   Updated: 2016/05/14 09:51:35 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int		k;

	k = 0;
	while (s[k] != '\0')
	{
		if (s[k] == (unsigned char)c)
			return (&s[k + 1]);
		k++;
	}
	if (s[k] == (unsigned char)c)
		return (&s[k]);
	return (NULL);
}
