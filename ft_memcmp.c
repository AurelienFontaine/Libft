/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:22:38 by marvin            #+#    #+#             */
/*   Updated: 2022/09/30 16:22:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((char *)s1[i] != (char *)s2[i])
			return ((char *)s1[i] - (char *)s2[i]);
	}
	return (0);
}