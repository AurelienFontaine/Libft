/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:44:28 by marvin            #+#    #+#             */
/*   Updated: 2022/09/30 15:44:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;
	char	*result;

	i = 0;
	if (to_find[i] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < n)
	{
		if (str[i] == to_find[0])
		{
			result = (char *)str + i;
			j = 0;
			while (str[i + j] == to_find[j] && i + j < n)
			{
				if (to_find[j + 1] == '\0')
					return (result);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
/*
int main () 
{
	const char str[20] = "TutorialsPoint";
	const char to_find[10] = "to";
	char *result;
	result = ft_strnstr(str, to_find, 4);
	printf("The substring is: %s\n", result);
 	return(0);
}
*/