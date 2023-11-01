/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:32:05 by hpatsi            #+#    #+#             */
/*   Updated: 2023/10/27 14:47:06 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	ft_atoi(const char *str)
{
	int	num;
	int	neg;

	while (is_space(*str))
		str++;
	neg = 1;
	if (*str == '-')
	{
		neg = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	num = 0;
	while (*str != 0 && (*str >= '0' && *str <= '9'))
	{
		num *= 10;
		num += (*str - '0');
		str++;
	}
	return (num * neg);
}
