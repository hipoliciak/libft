/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 21:30:00 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/03/02 17:18:11 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int n)
{
	if ((n >= 'a' && n <= 'z')
		|| (n >= 'A' && n <= 'Z')
		|| (n >= '0' && n <= '9'))
		return (1);
	else
		return (0);
}
