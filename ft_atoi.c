/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvivas-g <jvivas-g@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 01:22:38 by jvivas-g          #+#    #+#             */
/*   Updated: 2023/04/19 18:45:15 by jvivas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts the the string pointed to by "str" to int.
 * @param str String to be converted
 * @return int result of the conversion
 * @warning Spaces at the beginning of string are ignored.
 * takes into consideration negative numbers, as well
*/
int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\r' || *str == '\v' || *str == '\f')
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * sign);
}
