/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:34:57 by marvin            #+#    #+#             */
/*   Updated: 2022/11/14 14:17:30 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*dest;
	char	*str1;

	str1 = (char *)s1;
	i = 0;
	if (!str1 || !set)
		return (NULL);
	while (str1[i] && ft_strchr(set, str1[i]))
		i++;
	j = ft_strlen(str1) - 1;
	while (j && ft_strchr(set, str1[j]))
		j--;
	dest = ft_substr((char *)str1, i, j - i + 1);
	return (dest);
}
