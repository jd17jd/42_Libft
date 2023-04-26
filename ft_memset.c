/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvivas-g <jvivas-g@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:52:22 by jvivas-g          #+#    #+#             */
/*   Updated: 2023/04/07 00:39:17 by jvivas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Fills the memory region pointed to by "b" with the "c" value repeatedly
 * until the "len" memory region is covered. 
 * @param b Initial memory region
 * @param c Byte to copy
 * @param len Number of bytes to write
 * @return String with the new value copied
*/
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*aux;
	size_t			i;

	aux = b;
	i = 0;
	while (i < len)
	{
		aux[i] = (unsigned char) c;
		i++;
	}
	return (b);
}
