void print_char(char c);

void my_print_n_ascii(int n)
{
    for (int i = 32; i <= (32+n); i++)
    {
        print_char(i);
    }
}

/*int main(void)
{
    my_print_n_ascii(5);
    return 0;
}*/