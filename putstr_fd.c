/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghavenga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 07:53:39 by ghavenga          #+#    #+#             */
/*   Updated: 2016/05/13 08:49:11 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char const *s, int fd)
{
	int	k;

	k = 0;
	while (s[k] != '\0')
		k++;
	write(fd, s, k);
}
