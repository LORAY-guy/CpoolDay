void my_get_words(char *sentance)
{
    for (int i = 0; sentance[i] >= 0; i++)
    {
        if (sentance[i] == 9 || sentance[i] == 10) 
        {
            sentance[i] += "\n";
        }
    }
}

/*#include <string.h>

int main(void)
{
    char str[] = "bienvenue                     à epite ch";
    my_get_words(str);
    return 0;
}*/