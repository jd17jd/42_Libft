/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvivas-g <jvivas-g@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:56:01 by jvivas-g          #+#    #+#             */
/*   Updated: 2023/04/07 00:47:15 by jvivas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
/**
 * Compares "n" bytes in memory regions pointed to by "s1" and "s2"
 * Compares for "n" bytes long.
 * @param s1 String 1.
 * @param s2 String 2.
 * @param n Number of bytes to compare.
 * @return Integer number: 0 if the two regions are identical.
 * Positive value (1) if the first different character is greater in "s1".
 * Negative value (-1) if the first different character is greater in "s2".
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				res;

	i = 0;
	res = 0;
	while ((i < n) && (s1[i] != '\0' || s2[i] != '\0') && (res == 0))
	{
		if ((s2[i] == '\0' && s1[i] != '\0')
			|| ((unsigned char)s2[i] < (unsigned char)s1[i]))
			return (1);
		else if ((s1[i] == '\0' && s2[i] != '\0')
			|| ((unsigned char)s1[i] < (unsigned char)s2[i]))
			return (-1);
		i++;
	}
	return (res);
}
