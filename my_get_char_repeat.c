int my_get_char_repeat(char to_find, const char *to_search)
{
    int num = 0;
    for (int i = 0; to_search[i] != 0; i++)
    {
        if (i == to_find)
        {
            num++;
        }
    }

    return num;
}

/*#include <stdio.h>

int main(void)
{
    char str[] = "bienvenue à epitech !";
    printf("%d\n", my_get_char_repeat('e', str));
    return 0;
}*/