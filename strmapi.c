/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghavenga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 09:34:30 by ghavenga          #+#    #+#             */
/*   Updated: 2016/05/14 11:46:00 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		k;
	char	*string;

	k = 0;
	string = ft_strnew(strlen(s));
	while (string != NULL && s[k] != '\0')
	{
		string[k] = f(k, s[k]);
		k++;
	}
	return (string);
}
