#include <stdlib.h>

static int  ft_total_len(char const *s1, char const *s2)
{
  int i;

  i = 0;
  while (s1[i])
    i++;
  while (s2[i])
    i++;
  return (i);
}

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *s3;
    int i;
    int j;

    s3 = malloc(sizeof(char) * ft_total_len(s1, s2));
    i = 0;
    j = 0;
    while (s1[i])
    {
        s3[j] = s1[i];
        i++;
        j++;
    }
    i = 0;
    while (s2[i])
    {
        s3[j] = s2[i];
        i++;
        j++;
    }
    s3[j] = '\0';
    return (s3);
}
/*
#include <stdio.h>
int main(void)
{
    char    naruto[] = "Naruto e ";
    char    sonic[] = "Sonic";
    printf("%s", ft_strjoin(naruto, sonic));
}*/