/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvivas-g <jvivas-g@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:13:19 by jvivas-g          #+#    #+#             */
/*   Updated: 2023/04/07 00:37:30 by jvivas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copies "n" bytes from the memory region pointed to by "src" to the
 * memory region pointed to by "dst".
 * @param dst Memory region to fill
 * @param src Memory region to be copied
 * @param n Number of bytes to copy
 * @return Pointer to the destination memory region "dest".
 * @warning
 * This function does not verify Memory overlapping. It is possible to
 * overwrite a memory region if the destination address and the source address
 * overlap. We must make sure the destination address has enough space to
 * locate the copied data from the source address.
*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char			*aux_dest;
	unsigned const char		*aux_src;
	size_t					i;

	if (src == NULL && dst == NULL)
		return (NULL);
	aux_dest = (unsigned char *)dst;
	aux_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		aux_dest[i] = aux_src[i];
		i++;
	}
	return (dst);
}
