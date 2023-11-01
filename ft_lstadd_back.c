/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:01:22 by bda-mota          #+#    #+#             */
/*   Updated: 2023/11/01 13:50:29 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*curr;

	curr = *lst;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = new;
	new->next = NULL;
}

#include <stdio.h>

int	main()
{
	char	*str1 = "amanda";
	char	*str2 = "beatriz";
	char	*str3 = "caio";
	t_list	*root;
	t_list	*root2;
	t_list	*root3;

	root = ft_lstnew(str1);
	root2 = ft_lstnew(str2);
	root3 = ft_lstnew(str3);
	root->next = root2;
	root2->next = NULL;

	ft_lstadd_back(&root, root3);
	printf("%s\n", (char *)root->next->next->content);
	return (0);
}

