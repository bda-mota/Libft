/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:55:58 by bda-mota          #+#    #+#             */
/*   Updated: 2023/10/30 20:55:55 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*curr;

	count = 0;
	curr = lst;
	while (curr != NULL)
	{
		curr = curr->next;
		count++;
	}
	return (count);
}

#include <stdio.h>

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

int	main()
{
	char	*str1 = "amanda";
	char	*str2 = "beatriz";
	char	*str3 = "caio";
	t_list	*root;
	t_list	*root2;
	t_list	*root3;

	root = ft_lstnew(str1);
	root->next = NULL;
	insert_end(&root, "beatriz");
	insert_end(&root, "caio");
	insert_end(&root, "denniz");
	printf("%d", ft_lstsize(root));
	return (0);
}
