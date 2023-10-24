/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 10:45:32 by bda-mota          #+#    #+#             */
/*   Updated: 2023/10/24 15:11:00 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_count(char *str_to_compare)
{
	char	*new_str;
	int		size;

	size = ft_strlen(str_to_compare);
	new_str = ft_calloc((size + 1), 1);
	if (!new_str)
		return (NULL);
	return (new_str);
}

char	**ft_split(char const *s, char c)
{
	char	**array_str;
	char	*str;
	int		i;
	int		y;
	int		nb;

	i = 0;
	y = 0;
	nb = 0;
	while (s[i])
	{
		if (s[i] == c)
			nb++;
		i++;
	}
	array_str = ft_calloc((nb + 1), 1);
	i = 0;
	nb = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			str[y] = '\0';
			array_str[nb] = ft_count(str);
			y = 0;
			nb++;
		}
		else
		{
			str[y] = s[i];
			y++;
		}
		i++;
	}
	return (array_str);
}

#include <stdio.h>

int	main(void)
{
	char	*str;
	char	**result;
	int		i;

	str = "banana, abacaxi, laranja";
	result = ft_split(str, ',');
	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
}
