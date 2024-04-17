int my_little_bistro(int value1, char op, int value2)
{
    switch (op)
    {
        case '+':
            return value1 + value2;
        case '-':
            return value1 - value2;
        case '*':
            return value1 * value2;
        case '/':
            return value1 / value2;
        case '%':
            return value1 % value2;
    }
}

/*#include <stdio.h>

int main(void)
{
    printf("%d\n", my_little_bistro(150, '%', 54));
    return 0;
}*/