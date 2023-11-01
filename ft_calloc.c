/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:16:49 by bda-mota          #+#    #+#             */
/*   Updated: 2023/11/01 18:43:28 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*memory;
	size_t	total_size;

	total_size = nmemb * size;
	if (total_size / nmemb != size)
		return (NULL);
	memory = malloc(nmemb * size);
	if (memory != NULL)
		ft_bzero(memory, (nmemb * size));
	return (memory);
}
