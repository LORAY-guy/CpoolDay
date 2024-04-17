void print_char(char c);

void my_print_ascii(void)
{
    int p;
    p = 0;
    for (int i = 36; i <= 126; i++)
    {
        print_char(i);
    }
}

int main(void)
{
    my_print_ascii();
    return 0;
}