
#include <stdio.h>

int	main()
{
	char	*str1 = "amanda";
	char	*str2 = "beatriz";
	char	*str3 = "caio";
	t_list	*root;
	t_list	*root2;

	root = ft_lstnew(str1);
	root2 = ft_lstnew(str2);
	root->next = root2;
	printf("%s", (char *)root->next->content);

	return (0);
}
