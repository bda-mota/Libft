/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:37:39 by bda-mota          #+#    #+#             */
/*   Updated: 2023/10/18 19:07:17 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	result;

	i = 0;
	j = ft_strlen(dst);
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && (j + i) < (size - 1))
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j + i] = '\0';
	if (size > j)
		result = j + ft_strlen(src);
	else
		result = size + ft_strlen(src);
	return (result);
}
