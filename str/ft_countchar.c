/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:50:38 by hpatsi            #+#    #+#             */
/*   Updated: 2024/05/13 11:51:55 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countchar(char *str, int c)
{
	int	count;

	count = 0;
	if (str == 0)
		return (0);
	while (*str != 0)
	{
		if (*str == c)
			count++;
		str++;
	}
	return (count);
}
