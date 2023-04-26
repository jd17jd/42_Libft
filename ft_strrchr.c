/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvivas-g <jvivas-g@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 19:31:55 by jvivas-g          #+#    #+#             */
/*   Updated: 2023/04/07 00:49:17 by jvivas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Locates last occurrence of "c" in string "s".
 * @param s searched string
 * @param c character to search
 * @return Pointer to byte located, or NULL if there is no occurrence
 */
char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char) c)
			return ((char *)(s + len));
		len--;
	}
	return (0);
}
