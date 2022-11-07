/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 01:12:42 by marvin            #+#    #+#             */
/*   Updated: 2022/09/20 01:12:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	size_t	i;
	int	nb;
	int	signe;

	i = 0;
	nb = 0;
	signe = 1;
	while (str && str[i] <= 32 || str[i] > 126 )
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = signe * -1;
		i++;
	}
	while (str && str[i] <= '9' && str[i] >= '0')
	{
		nb = nb * 10 + str[i] + '0';
		i++;
	}
	return (nb * signe);
}