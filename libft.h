/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:54:03 by bda-mota          #+#    #+#             */
/*   Updated: 2023/11/01 20:38:28 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/**
 * @brief Allocates (with malloc(3)) and returns a new node. The member variable ’content’ is initialized with the value of the parameter ’content’.
 *
 * The variable ’next’ is initialized to NULL.
 * 
 * @param content The content to create the node with
 *
 * @return The new node.
 */
t_list	*ft_lstnew(void *content);
/**
 * @brief Last node of the list.
 * 
 * @param lst The beginning of the list
 *
 * @return The last node of the list.
 */
t_list	*ft_lstlast(t_list *lst);
/**
 * @brief Iterates the list ’lst’ and applies the function ’f’ on the content of each node.
 * 
 * Creates a new list resulting of the successive applications of the function ’f’.
 * 
 * The ’del’ function is used to delete the content of a node if needed.
 *
 * @param lst The address of a pointer to a node
 *
 * @param f The address of the function used to iterate on the list
 *
 * @param del The address of the function used to delete the content of a node if needed
 *
 * @return The new list. NULL if the allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
/**
 * @brief Counts the number of nodes in a list.
 * 
 * @param lst The beginning of the list
 *
 * @return The length of the list.
 */
int		ft_lstsize(t_list *lst);
/**
 * @brief Adds the node ’new’ at the beginning of the list.
 * 
 * @param lst  The address of a pointer to the first link of a list
 *
 * @param new The address of a pointer to the node to be added to the list
 * 
 * @return None.
 */
void	ft_lstadd_front(t_list **lst, t_list *new);
/**
 * @brief Adds the node ’new’ at the end of the list.
 * 
 * @param lst  The address of a pointer to the first link of a list
 *
 * @param new The address of a pointer to the node to be added to the list
 * 
 * @return None.
 */
void	ft_lstadd_back(t_list **lst, t_list *new);
/**
 * @brief Takes as a parameter a node and frees the memory of the node’s content using the function ’del’ given as a parameter and free the node.
 * 
 * The memory of ’next’ must not be freed.
 * 
 * @param lst The node to free
 *
 * @param del The address of a pointer to the function used to delete the content
 * 
 * @return None.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void*));
/**
 * @brief Deletes and frees the given node and every successor of that node, using the function ’del’ and free(3).
 * 
 * Finally, the pointer to the list must be set to NULL.
 * 
 * @param lst The address of a pointer to a node
 *
 * @param del The address of a pointer to the function used to delete the content of the node
 * 
 * @return None.
 */
void	ft_lstclear(t_list **lst, void (*del)(void*));
/**
 * @brief Iterates the list ’lst’ and applies the function ’f’ on the content of each node.
 * 
 * @param lst The address of a pointer to a node
 *
 * @param f The address of a pointer to the function used to iterate on the list 
 * 
 * @return None.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * @brief Allocates (with malloc(3)) and returns a string representing the integer received as an argument.
 *
 * Negative numbers must be handled.
 * 
 * @param n The integer to convert
 *
 * @return The string representing the integer. NULL if the allocation fails.
 */
char	*ft_itoa(int n);
/**
 * @brief Returns a pointer to the first occurrence of the character c in the string s.
 *
 * @param s The string to search c
 *
 * @param c The character to found
 *
 * @return A pointer to the matched character or NULL if the character is not found.
 */
char	*ft_strchr(const char *s, int c);
/**
 * @brief Returns a pointer to a new string which is a duplicate of the string s.
 *
 * @param s The string to copy
 *
 * @return A pointer to the duplicated string, or NULL if insufficient memory was available.
 */
char	*ft_strdup(const char *s);
/**
 * @brief Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’. 
 *
 * @param s1 The preffix string
 *
 * @param s2 The suffix string
 *
 * @return The new string. NULL if the allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2);
/**
 * @brief Applies the function ’f’ to each character of the string ’s’, and passing its index as first argument to create a new string (with malloc(3)) resulting from successive applications of ’f’.
 *
 * @param s The string on which to iterate
 *
 * @param f  The function to apply to each character
 *
 * @return The string created from the successive applications of ’f’. Returns NULL if the allocation fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/**
 * @brief Locates the first	occurrence of the null-terminated string little in the string big, where not more than len characters are searched. 
 *
 * Characters that appear after	a '\0' character are not searched.
 *
 * @param big The string to search little
 *
 * @param little The string to found
 *
 * @param len bytes to search
 *
 * @return  If little is an empty string, big is returned; if little occurs nowhere in big, NULL is returned; otherwise a pointer to the first character of the first occurrence of little is returned.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len);
/**
 * @brief Returns a pointer to the last occurrence of the character c in the string s.
 *
 * @param s The string to search c
 *
 * @param c The character to found
 *
 * @return A pointer to the matched character or NULL if the character is not found.
 */
char	*ft_strrchr(const char *s, int c);
/**
 * @brief Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.
 * 
 * @param s1 The string to be trimmed
 *
 * @param set The reference set of characters to trim
 *
 * @return The trimmed string. NULL if the allocation fails.
 */
char	*ft_strtrim(char const *s1, char const *set);
/**
 * @brief Allocates (with malloc(3)) and returns a substring from the string ’s’.
 * 
 * The substring begins at index ’start’ and is of maximum size ’len’.
 *
 * @param s The string from which to create the substring
 *
 * @param start The start index of the substring in the string ’s’
 *
 * @param len The maximum length of the substring
 *
 * @return The substring. NULL if the allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);
/**
 * @brief Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. 
 *
 * The array must end with a NULL pointer.
 * 
 * @param s1 The string to be split
 *
 * @param c The delimiter character
 *
 * @return The array of new strings resulting from the split. NULL if the allocation fails.
 */
char	**ft_split(char const *s, char c);

/**
 * @brief Converts the initial portion of the string pointed to by nptr to int.
 *
 * @param nptr The string
 *
 * @return The converted value.
 */
int		ft_atoi(const char *nptr);
/**
 * @brief Checks for an alphanumeric character.
 *
 * The values returned are nonzero if the character c falls into the tested class, and a zero value if not.
 *
 * @param c The character
 *
 * @return 0 or nonzero.
 */
int		ft_isalnum(int c);
/**
 * @brief Checks for an alphabetic character.
 *
 * The values returned are nonzero if the character c falls into the tested class, and a zero value if not.
 *
 * @param c The character
 *
 * @return 0 or nonzero.
 */
int		ft_isalpha(int c);
/**
 * @brief Checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.
 *
 * The values returned are nonzero if the character c falls into the tested class, and a zero value if not.
 *
 * @param c The character
 *
 * @return 0 or nonzero.
 */
int		ft_isascii(int c);
/**
 * @brief Checks for a digit (0 through 9).
 *
 * The values returned are nonzero if the character c falls into the tested class, and a zero value if not.
 *
 * @param c The character
 *
 * @return 0 or nonzero.
 */
int		ft_isdigit(int c);
/**
 * @brief Checks for any printable character including space.
 *
 * The values returned are nonzero if the character c falls into the tested class, and a zero value if not.
 *
 * @param c The character
 *
 * @return 0 or nonzero.
 */
int		ft_isprint(int c);
/**
 * @brief Compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2
 *
 * @param ptr1 A pointer to the first string to compare
 *
 * @param ptr2 A pointer to the second string to compare
 *
 * @param num Bytes to compare
 *
 * @return integer less than, equal to, or greater than zero if the first n bytes of s1 is found, respectively, to be less than, to match, or be greater than the first n bytes of s2.
 */
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
/**
 * @brief Compare part of two strings.
 * 
 * @param s1 First string
 *
 * @param s2 Second string
 *
 * @param n Bytes to compare
 *
 * @return An integer greater than, equal to, or less than 0.
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/**
 * @brief Checks for a lower-case character.
 *
 * The values returned are nonzero if the character c falls into the tested class, and a zero value if not.
 *
 * @param c The character
 *
 * @return 0 or nonzero.
 */
int		ft_tolower(int c);
/**
 * @brief Checks for an uppercase letter.
 *
 * The values returned are nonzero if the character c falls into the tested class, and a zero value if not.
 *
 * @param c The character
 *
 * @return 0 or nonzero.
 */
int		ft_toupper(int c);

/**
 * @brief Sets the first n bytes of the area starting at s to zero.
 *
 * @param s Pointer of the memory to set 0
 *
 * @param n number of bytes to set to 0
 * 
 * @return None.
 */
void	ft_bzero(void *s, size_t n);
/**
 * @brief Allocates memory for an array of nmemb elements of size bytes each.
 *
 * The memory is set to zero. If nmemb or size is 0, then calloc() returns either NULL, or a unique pointer value that can later be successfully passed to free().
 * 
 * @param nmemb Number of elements
 *
 * @param size Size of the bytes
 *
 * @return A pointer to the allocated memory.
 */
void	*ft_calloc(size_t nmemb, size_t size);
/**
 * @brief Scans the initial n bytes of the memory area pointed to by s for the first instance of c.
 *
 * Both c and the bytes of the memory area pointed to by s are interpreted as unsigned char.
 * 
 * @param s Pointer for the memory
 *
 * @param c The character to search in s
 *
 * @param n Size of the bytes to scan
 *
 * @return A pointer to the matching byte or NULL if the character does not occur in the given memory area.
 */
void	*ft_memchr(const void *s, int c, size_t n);
/**
 * @brief Copies n bytes from memory area src to memory area dest.
 *
 * The memory areas must not overlap.
 * 
 * @param dest The memory for copy
 *
 * @param src The memory to copy
 *
 * @param n Size of the bytes to copy
 *
 * @return A pointer to dest.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);
/**
 * @brief Copies n bytes from memory area src to memory area dest.
 *
 *  The memory areas may overlap: copying takes place as though the bytes in src are first copied into a temporary array that does not overlap src or dest, and the bytes are then copied from the temporary array to dest.
 * 
 * @param dest The memory for copy
 *
 * @param src The memory to copy
 *
 * @param n Size of the bytes to copy
 *
 * @return A pointer to dest.
 */
void	*ft_memmove(void *dest, const void *src, size_t n);
/**
 * @brief Fills the first n bytes of the memory area pointed to by s with the constant byte c.
 *
 *  The memory areas may overlap: copying takes place as though the bytes in src are first copied into a temporary array that does not overlap src or dest, and the bytes are then copied from the temporary array to dest.
 * 
 * @param ptr The memory for apply value
 *
 * @param value The value to apply 
 *
 * @param num Size of the bytes to apply value
 *
 * @return A pointer to the memory area s.
 */
void	*ft_memset(void *ptr, int value, size_t num);
/**
 * @brief Outputs the character ’c’ to the given file descriptor.
 * 
 * @param c The character to output
 *
 * @param fd The file descriptor on which to write
 *
 * @return None.
 */
void	ft_putchar_fd(char c, int fd);
/**
 * @brief Outputs the string ’s’ to the given file descriptor followed by a newline.
 * 
 * @param s The string to output
 *
 * @param fd The file descriptor on which to write
 *
 * @return None.
 */
void	ft_putendl_fd(char *s, int fd);
/**
 * @brief Outputs the integer ’n’ to the given file descriptor.
 * 
 * @param s The integer to output
 *
 * @param fd The file descriptor on which to write
 *
 * @return None.
 */
void	ft_putnbr_fd(int n, int fd);
/**
 * @brief Outputs the string ’s’ to the given file descriptor
 * 
 * @param s The string to output
 *
 * @param fd The file descriptor on which to write
 *
 * @return None.
 */
void	ft_putstr_fd(char *s, int fd);
/**
 * @brief Applies the function ’f’ on each character of the string passed as argument, passing its index as first argument. 
 *
 * Each character is passed by address to ’f’ to be modified if necessary.
 * 
 * @param s The string on which to iterate
 *
 * @param f The function to apply to each character
 *
 * @return None.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/**
 * @brief Appends the NUL-terminated string src to the end of dst.
 *
 * It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.
 * 
 * @param dst Destination string 
 *
 * @param src String to concatenate
 *
 * @param size Bytes to concatenate
 *
 * @return The total length of the string they tried to create (initial length of dst plus the length of src).
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size);
/**
 * @brief Copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.
 * 
 * @param dst Destination string 
 *
 * @param src String to copy
 *
 * @param size Bytes to copy
 *
 * @return The total length of the string they tried to create (length of src).
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
/**
 * @brief Calculates the length of the string s, excluding the terminating null byte.
 * 
 * @param s String
 *
 * @return Number of bytes in the string s.
 */
size_t	ft_strlen(const char *s);

#endif
