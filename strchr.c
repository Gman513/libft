/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghavenga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 14:50:19 by ghavenga          #+#    #+#             */
/*   Updated: 2016/05/13 10:05:01 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	char	*temp;
	int		k;

	k = 0;
	while (s[k] != '\0')
	{
		if (s[k] == (unsigned char)c)
		{
			temp = &s[k];
			return (temp);
		}
		k++;
	}
	if (s[k] == (unsigned char)c)
	{
		temp = &s[k];
		return (temp);
	}
	return (NULL);
}
