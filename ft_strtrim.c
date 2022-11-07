/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Untitled-1                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:34:57 by marvin            #+#    #+#             */
/*   Updated: 2022/10/06 14:34:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*dest;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1) - 1;
	while (j && ft_strchr(set, s1[j]))
		j--;
	dest = ft_substr((char *)s1, i, j - i + 1);
	return (dest);
}


	i = 0;
	dest = malloc(sizeof(char *) * (ft_strlen(s1) - 2*(ft_strlen(set)) + 1));
	if (!dest)
		return (NULL);
	while (s1[i] == set[i])
		i++;
	k = i;
	i = ft_strlen(s1);
	j = ft_strlen(set);
	while (s1[i] == set[j])
	{
		i--;
		j--;
	}
	j = 0;
	while (k <= i )
		dest[j++] = s1[k++];
	dest[j] = '\0';
	return (dest);