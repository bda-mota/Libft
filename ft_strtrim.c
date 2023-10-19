/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:26:30 by bda-mota          #+#    #+#             */
/*   Updated: 2023/10/19 17:26:14 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*copy_s1;
	int		i;
	int		j;
	int		size_s1;

	i = 0;
	j = 0;
	if (!copy_s1)
		return (NULL);
	while (s1[i])
	{
		if (s1[i] == set[i])
		{
			i++;
			j++;
		}
		else
		{
			copy_s1[j] = s1[i];
			j++;
			i++;
		}
	}
	copy_s1[j] = '\0';
	return (copy_s1);
}

#include <stdio.h>

int	main(void)
{
	char	s1[] = "bia bia mota bia";
	char	s2[] = "bia";
	char	*result;

	printf("%s\n", s1);
	result = ft_strtrim(s1, s2);
	printf("%s\n", result);
	return (0);
}
