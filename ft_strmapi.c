/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvivas-g <jvivas-g@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:17:17 by jvivas-g          #+#    #+#             */
/*   Updated: 2023/04/07 00:19:15 by jvivas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Each character of the function "s" uses the function "f" using
 * as parameters the index of each character in "s" and the character itself.
 * @param s String to iterate
 * @param f Function to apply on each character
 * @return The result of the string after the use of "f" oneach character.
 * NULL if the memory allocation fails
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	len;
	unsigned int	i;

	len = ft_strlen(s);
	res = (char *) malloc(sizeof(char) * (len + 1));
	if (!res)
	{
		free(res);
		return (0);
	}
	i = 0;
	while (i < len)
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[len] = 0;
	return (res);
}
