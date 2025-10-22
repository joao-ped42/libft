const char   *ft_strchr(const char *str, int c)
{
    while ((*str) && (*str != c))
        str++;
    return (str);
}
/*#include <stdio.h>
int main(void)
{
    char naruto[] = "Naruto e sasuke";
    printf("%s\n", ft_strchr(naruto, 's'));
}*/