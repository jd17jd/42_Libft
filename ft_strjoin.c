/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvivas-g <jvivas-g@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:17:01 by jvivas-g          #+#    #+#             */
/*   Updated: 2023/04/07 00:16:52 by jvivas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Allocates memory with malloc() and returns a new string formed by the
 * concatenation of "s1" and "s2".
 * @param s1 The first string.
 * @param s2 The string to added to "s1".
 * @return The new string. NULL if the memory allocation fails
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	size_t	len_s1;
	size_t	len_s2;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	res = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!res)
	{
		free(res);
		return (NULL);
	}
	while (*s1 != '\0')
		res[i++] = *s1++;
	while (*s2 != '\0')
		res[i++] = *s2++;
	res[i] = '\0';
	return (res);
}
