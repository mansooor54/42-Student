#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char *result;
    size_t len1 = strlen(s1);
    size_t len2 = strlen(s2);

    result = malloc(len1 + len2 + 1);
    if (!result)
        return NULL;

    strcpy(result, s1);
    strcat(result, s2);
    return result;
}

int main(void)
{
    const char *str1 = "Hello, ";
    const char *str2 = "World!";
    char *result = ft_strjoin(str1, str2);

    printf("%s\n", result);
    free(result);
    return 0;
}