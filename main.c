/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:54:00 by bda-mota          #+#    #+#             */
/*   Updated: 2023/10/25 21:10:40 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*int	main(void)
{
	char	*str;
	int		i;
	char	**array;

	i = 0;
	//str = ft_strdup(",,,abacaxi,uva,dsadsjadsa,,beatriz");
	array = ft_split(",,,abacaxi,uva,dsadsjadsa,,beatriz", ',');
	while (array[i])
	{
		printf("%s\n", array[i]);
		i++;
	}
	free (array);
	return (0);
}*/
/*
int	main(void)
{
	int	x;

	x = -9;
	printf("%s", ft_itoa(x));
	return (0);
}*/

int	main(void)
{
	char	*str_big;
	char	*i;

	str_big = "biabiamotabiamotbbiabia";
	i = "bia";
	printf("%s", ft_strtrim(str_big, i));
	return (0);
}
