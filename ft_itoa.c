/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 10:45:46 by bda-mota          #+#    #+#             */
/*   Updated: 2023/10/21 12:35:54 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	size_n(int n)
{
	int	size;

	size = 0;
	if (n == 0)
		size++;
	if (n < 0)
	{
		n = -n;
		size++;
	}
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		size;

	i = 0;
	size = size_n(n);
	str = malloc(sizeof(char) * size + 1);
	if (n < 0)
	{
		n = -n;
		str[i] = '-';
		i++;
	}
	str[i] = n + '0';
	return (str);
}

#include <stdio.h>

int	main(void)
{
	int	x;

	x = -1;
	printf("%s\n", ft_itoa(x));

}
