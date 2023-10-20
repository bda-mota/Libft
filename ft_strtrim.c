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
	int	size;
	int	i;
    int	start;
    int	end;
	char *copy_s1;

	i = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
    while (s1[start] != '\0' && ft_strchr(set, s1[start]))
        start++;
    while (end >= start && ft_strchr(set, s1[end]))
        end--;
    size = end - start + 1;
   if (size < 0)
        size = 0;
    copy_s1 = malloc(sizeof(char) * (size + 1));
    if (!copy_s1) {
        return NULL;
    }
	while (i < size)
	{
		copy_s1[i] = s1[start + i];
		i++;
	}
    copy_s1[size] = '\0';
    return (copy_s1);
}

#include <stdio.h>

int main(void) {
    char s1[] = "biabia mota mota bia mota bia";
    char s2[] = "";
    char *result;

    printf("%s\n", s1);
    result = ft_strtrim(s1, s2);
    printf("%s\n", result);

    free(result);
    return 0;
}
