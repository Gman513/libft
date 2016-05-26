/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnew.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghavenga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 08:06:55 by ghavenga          #+#    #+#             */
/*   Updated: 2016/05/14 11:24:22 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*string;
	int		k;

	string = ft_memalloc(size);
	k = 0;
	if (string == NULL)
		return (NULL);
	else
		ft_bzero(string, size);
	return (string);
}
