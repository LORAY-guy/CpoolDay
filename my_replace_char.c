void print_char(char c);

char *my_replace_char(char *origin, char toFind, char toReplace) 
{
    for (int i = 0; origin[i] != 0; i++)
    {
        if (origin[i] == toFind)
        {
            origin[i] = toReplace;
        }
    }

    return origin;
}

/*#include <stdio.h>

int main(int ac, char **av)
{
    char str[] = "bienvenue à epitech !";
    printf("%s\n", my_replace_char(str, 'e', 'a'));
    return 0;
}*/