/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:13:43 by bda-mota          #+#    #+#             */
/*   Updated: 2023/10/18 19:07:34 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;
	int			i;

	str = s;
	i = ft_strlen(str);
	while (i > -1)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)(str + i));
		i--;
	}
	return (NULL);
}
