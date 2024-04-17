float my_average(int *grades, int count)
{
    float nb_notes;
    for (int i = 0; i <= count-1, i++)
    {
        nb_notes += grades[i];
    }
    return nb_notes / count;
}

/*#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int list[5] = {10, 17, 6, 14, 20};
    printf('%f\n', my_average(list, 5));
    return 0;
}*/