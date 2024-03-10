/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 17:38:31 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/03/09 14:06:09 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned int	i;
	char			*find;

	find = (char *)str;
	i = 0;
	while (find[i] != '\0')
	{
		if ((unsigned char)find[i] == (unsigned char)c)
			return (&find[i]);
		i++;
	}
	if (c == '\0')
		return (&find[i]);
	return (0);
}
