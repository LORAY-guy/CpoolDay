void print_number(int value);

void my_sort(int *nlist, int size)
{
    if (size < 2)
    {
        print_number(nlist[0]);
    } else {
        int[size] new_nlist;
        int min_num
        for (int i = 0; i <= size; i++)
        {
            for (int i = 0; i <= size; i++)
            {
                if (nlist[i] <= min_num) 
                {
                    min_num = nlist[i];
                }
            }
            print_number(min_num);
        }
    }
}

/*int main(void)
{
    char list[6] = {-84, 42, -21, 21, -42, 84};
    my_sort(list, 6);
    return 0;
}*/