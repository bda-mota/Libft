#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}

void print_index_and_char(unsigned int i, char *c) {
    printf("Índice: %u, Caractere: %c\n", i, *c);
}

int main(void) {
    char str[] = "Hello, mundo!";
    ft_striteri(str, print_index_and_char);
    return 0;
}