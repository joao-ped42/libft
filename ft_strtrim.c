#include <stdlib.h>

static int  ft_total_len(char const *s1, char const *set)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s1[i])
        i++;
    while (set[j])
    {
        j++;
        i--;
    }
    return (i);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *str;
    int i;
    int j;
    int k;

    str = malloc(sizeof(char) * ft_total_len(s1, set));
    i = 0;
    j = 0;
    k = 0;
    while (s1[i]);
    {
        if (s1[i] != set[j])
        {
            str[k] = s1[i];
            k++;
        }
        i++;
    }
    return (str);
}
/*
#include <stdio.h>
int main(void)
{
    char naruto[] = "Naruto e Sasuke";
    char sonic[] = "Sas";
    printf("%s", ft_strtrim(naruto, sonic));
}*/