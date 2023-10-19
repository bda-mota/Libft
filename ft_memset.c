/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:16:59 by bda-mota          #+#    #+#             */
/*   Updated: 2023/10/18 18:24:58 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	v;
	size_t			i;

	p = s;
	v = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		p[i] = v;
		i++;
	}
	return (s);
}
