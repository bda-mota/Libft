/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 10:45:32 by bda-mota          #+#    #+#             */
/*   Updated: 2023/10/25 17:56:11 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		count++;
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (count);
}

static char	*ft_copy(char const *str, int i, int size)
{
	int		idx;
	char	*new_str;

	new_str = malloc(sizeof(char) * (size + 1));
	if (!new_str)
		return (NULL);
	idx = 0;
	while (idx < size)
	{
		new_str[idx] = str[i];
		i++;
		idx++;
	}
	new_str[idx] = '\0';
	return (new_str);
}

static void	ft_count_char(char const *str, char c, char **array, int size_array)
{
	int		i;
	int		y;
	int		size;

	i = 0;
	y = 0;
	while (str[i] && y < size_array)
	{
		size = 0;
		while (str[i] && str[i] != c)
		{
			size++;
			i++;
		}
		if (size > 0)
		{
			array[y] = ft_copy(str, (i - size), size);
			y++;
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**array_str;
	int		size;

	size = ft_count_words(s, c);
	array_str = malloc(sizeof(char *) * (size + 1));
	if (!array_str)
		return (NULL);
	ft_count_char(s, c, array_str, size);
	array_str[size] = NULL;
	return (array_str);
}
