/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvivas-g <jvivas-g@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 21:42:25 by jvivas-g          #+#    #+#             */
/*   Updated: 2023/04/07 00:44:17 by jvivas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * Appends the string "src" to the end of the string "dst".
 * String "dst" must have enough space to hold the result.
 * Grants null termination. Safer than strcat and strncat.
 * @param dst String to fill.
 * @param src String to append.
 * @param dstsize Buffer size of dest.
 * @return Total length of the string tried to create
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	res;

	i = 0;
	j = 0;
	res = 0;
	while (dst[i] != '\0')
		i++;
	while (src[res] != '\0')
		res++;
	if (dstsize <= i)
		res = res + dstsize;
	else
		res = res + i;
	while (src[j] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (res);
}
