/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvivas-g <jvivas-g@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 22:24:18 by jvivas-g          #+#    #+#             */
/*   Updated: 2023/04/07 00:36:33 by jvivas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Finds the first occurrence of the character "c" in the first "n" ​​bytes
 * in a memory region "s". 
 * @param s Searched memory region
 * @param c Character to find
 * @param n Examinated bytes in the memory region
 * @return Pointer to byte located. NULL otherwise
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*aux;
	size_t			i;

	aux = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (aux[i] == (unsigned char) c)
			return ((void *)&aux[i]);
		i++;
	}
	return (0);
}
