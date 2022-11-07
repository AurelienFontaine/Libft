/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Untitled-1                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:03:10 by marvin            #+#    #+#             */
/*   Updated: 2022/09/26 16:03:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest;
	const char	*source;
	size_t		i;

	i = 0;
	dst = dest;
	source = src;
	if (dst <= source)
	{
		while (i < n)
		{
			dst[i] = source[i];
			i++;
		}
	}
	else 
		while (n > 0)
		{
			dst[n] = source[n];
			n--;
		}
	return (dest);
}