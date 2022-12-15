/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 01:27:30 by marvin            #+#    #+#             */
/*   Updated: 2022/11/17 13:51:12 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	size_t			len_dest;
	size_t			len_src;

	i = 0;
	if (!dest || !src)
		return (0);
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size < len_dest + 1)
		return (size + len_src);
	if (size > len_dest + 1)
	{
		while (src[i] != '\0' && len_dest + 1 + i < size)
		{
			dest[len_dest + i] = src[i];
			i++;
		}
	}
	dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}
