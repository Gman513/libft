/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghavenga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 11:01:31 by ghavenga          #+#    #+#             */
/*   Updated: 2016/05/09 11:12:31 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int letter)
{
	if (letter <= 122 && letter >= 97)
	{
		letter = letter - 32;
	}
	return (letter);
}
