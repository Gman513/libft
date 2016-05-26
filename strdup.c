/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghavenga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 13:29:13 by ghavenga          #+#    #+#             */
/*   Updated: 2016/05/14 15:11:49 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*string;
	int		k;

	k = 0;
	if (!s1)
		return (NULL);
	while (s1[k])
		k++;
	string = ft_memalloc(k);
	if (string == NULL)
		return (NULL);
	k = 0;
	while (s1[k] != '\0')
	{
		string[k] = s1[k];
		k++;
	}
	string[k] = '\0';
	return (string);
}
