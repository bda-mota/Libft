/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:26:30 by bda-mota          #+#    #+#             */
/*   Updated: 2023/10/21 11:26:14 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	calculation_size(char const *s1, char const *set, int size_start)
{
	int	i;
	int	size;
	int	end;

	i = 0;
	end = ft_strlen(s1) - 1;
	while (end >= size_start && ft_strchr(set, s1[end]))
		end--;
	size = end - size_start + 1;
	return (size);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*copy_s1;
	int		i;
	int		size;
	int		start;

	i = 0;
	start = 0;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	size = calculation_size(s1, set, start);
	if (size < 0)
		size = 0;
	copy_s1 = malloc(sizeof(char) * (size + 1));
	if (!copy_s1)
		return (NULL);
	while (i < size)
	{
		copy_s1[i] = s1[start + i];
		i++;
	}
	copy_s1[size] = '\0';
	return (copy_s1);
}