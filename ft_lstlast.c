/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:01:11 by bda-mota          #+#    #+#             */
/*   Updated: 2023/10/30 21:01:12 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (0);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void	insert_end(t_list **root, char *str)
{
	t_list	*new_node;
	t_list	*curr;

	new_node = malloc(sizeof(t_list));
	new_node->next = NULL;
	new_node->content = str;
	curr = *root;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = new_node;
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
	t_list	*last;
	root = ft_lstnew(str1);
	root2 = ft_lstnew(str2);
	root3 = ft_lstnew(str3);
	root->next = root2;
	root2->next = root3;
	root3->next = NULL;

	last = ft_lstlast(root);

	printf("%s\n", (char *)last->content);
	return (0);
}
