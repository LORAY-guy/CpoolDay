void print_char(char c);

void my_print_ascii(void)
{
    int p;
    p = 0;
    for (int i = 65; i <= 126; i++) 
    {
        print_char(i);
    }
}