/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:50:08 by bda-mota          #+#    #+#             */
/*   Updated: 2023/10/18 19:07:08 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		size;
	int		i;

	i = 0;
	size = ft_strlen(s);
	dest = malloc((sizeof (char) * (size + 1)));
	if (!dest)
		return (NULL);
	else
	{
		while (s[i])
		{
			dest[i] = s[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
