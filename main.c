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
