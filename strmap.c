/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghavenga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 09:23:49 by ghavenga          #+#    #+#             */
/*   Updated: 2016/05/14 11:44:35 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		k;
	char	*string;

	k = 0;
	string = ft_strnew(ft_strlen(s));
	while (string != NULL && s[k] != '\0')
	{
		string[k] = f(s[k]);
		k++;
	}
	return (string);
}
