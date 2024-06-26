/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stristype.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 09:07:41 by hpatsi            #+#    #+#             */
/*   Updated: 2024/05/13 08:55:50 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_stristype(char *s, int (*f)(int))
{
	while (*s != 0)
	{
		if (!f(*s))
			return (0);
		s++;
	}
	return (1);
}
