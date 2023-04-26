/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvivas-g <jvivas-g@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:57:57 by jvivas-g          #+#    #+#             */
/*   Updated: 2023/04/07 00:45:44 by jvivas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * Calculates length of string s
 * @param s string
 * @return number of bytes until character null is found
 */
size_t	ft_strlen(const char *s)
{
	size_t	res;

	res = 0;
	while (*s)
	{
		res++;
		s++;
	}
	return (res);
}
