/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:47:07 by bda-mota          #+#    #+#             */
/*   Updated: 2023/10/19 15:47:33 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
    int size;
    char    *new_str;

    i = 0;
    if (s == NULL || f == NULL)
        return (0);
    size = ft_strlen(s);
    new_str = malloc(sizeof(char) * size + 1);
    if (!new_str)
        return(NULL);
    while (s[i])
    {
        new_str[i] = f(i, s[i]);
        i++;
    }
    new_str[i] = '\0';
    return(new_str);
}

#include <stdio.h>

char f(unsigned int i, char c)
{
	char str;
	str = c + 1;
	return (str);
}

int main()
{
	char str1[] = "123";
	char *str2;
	str2 = ft_strmapi(str1, *f);
	printf("%s\n", str2);
}
