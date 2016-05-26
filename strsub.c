/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsub.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghavenga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 12:53:18 by ghavenga          #+#    #+#             */
/*   Updated: 2016/05/14 12:27:53 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*string;
	size_t	k;

	k = 0;
	while (start--)
		k++;
	string = ft_strnew(len);
	if (string == NULL)
		return (NULL);
	ft_strncpy(string, s + k, len);
	string[len] = '\0';
	return (string);
}
