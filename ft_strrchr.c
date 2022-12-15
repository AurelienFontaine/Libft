/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:44:47 by marvin            #+#    #+#             */
/*   Updated: 2022/11/17 13:52:25 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = (int)ft_strlen(str) + 1;
	if (!str)
		return (NULL);
	while (i--)
	{
		if (*(str + i) == (char)c)
			return ((char *)str + i);
	}
	return (NULL);
}
