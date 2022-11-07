/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Untitled-2                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:16:26 by marvin            #+#    #+#             */
/*   Updated: 2022/10/03 18:16:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	k;
	char	*str;

	i = 0;
	k = 0;
	str = malloc(sizeof(char *) * len + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		if (k < len && i >= start)
		{
			str[k] = s[i];
			k++;
		}
		i++;
	}
	str[k] = '\0';
	return (str);
}