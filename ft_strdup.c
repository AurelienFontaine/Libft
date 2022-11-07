/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Untitled-1                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:00:26 by marvin            #+#    #+#             */
/*   Updated: 2022/10/03 18:00:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	i;
	char	*dst;

	i = 0;
	dst = malloc(sizeof(char) * (ft_strlen(src) + 1))
	if (!dst)
		return (NULL);
	while (dst)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst); 
}