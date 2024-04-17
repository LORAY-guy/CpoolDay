void print_char(char c);

void my_print_ascii(void)
{
    int p;
    p = 0;
    /*while (p <= 255)
    {
        print_char(p);
        p++;
    }*/

    for (int i = 65; i <= 255; i++) 
    {
        print_char(i);
    }
}

int main(void) 
{
    my_print_ascii();
    return 0;
}