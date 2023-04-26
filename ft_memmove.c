/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvivas-g <jvivas-g@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:12:44 by jvivas-g          #+#    #+#             */
/*   Updated: 2023/04/07 00:51:52 by jvivas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copies "len" bytes from memory area "src" to memory area "dst".
 * It is capable of handling situations where the source and
 * destination areas overlap.
 * @param dst Memory region where data will be copied
 * @param src Memory region from which data will be copied
 * @param len number of bytes to be copied from "src" to "dst"
 * @return Original value of dst
 * @warning
 * If the destination pointer is greater than the source pointer, the copy is
 * made from the start of the source region to the end of the destination
 * region. Otherwise, the copy is made in the reverse direction, from the end
 * of the source region to the beginning of the destination region
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*aux_dest;
	unsigned const char	*aux_src;

	if (!dst && !src)
		return (NULL);
	aux_dest = (unsigned char *)dst;
	aux_src = (unsigned const char *)src;
	if (aux_dest < aux_src)
		return (ft_memcpy(dst, src, len));
	else
	{
		while (len > 0)
		{
			len--;
			aux_dest[len] = aux_src[len];
		}
	}
	return (dst);
}
