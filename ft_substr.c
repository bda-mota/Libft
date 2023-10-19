/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:39:45 by bda-mota          #+#    #+#             */
/*   Updated: 2023/10/18 18:25:09 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = malloc(sizeof(char) * (len));
	if (!dest)
		return (NULL);
	while (i < len)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[start + i] = '\0';
	return (dest);
}
