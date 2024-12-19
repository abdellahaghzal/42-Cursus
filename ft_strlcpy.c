/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 02:15:54 by marvin            #+#    #+#             */
/*   Updated: 2024/08/11 02:15:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int		i;
	size_t	j;

	i = 0;
	if (size <= 0)
		return (ft_strlen(src));
	j = 0;
	while (src[j] != 0 && j < size - 1)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = 0;
	return (ft_strlen(src));
}
