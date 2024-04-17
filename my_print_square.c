void print_char(char c);

void my_print_square(int size, char c)
{
    if (size > 1) {
        for (int i = 0; i <= size-1; i++)
        {
            for (int i = 0; i <= size-1; i++)
            {
                print_char(c);
            }
            print_char(10); // Saute une ligne.
        }
    } else {
        print_char(c);
    }
}

/*int main(void)
{
    my_print_square(2, 'g');
    return 0;
}*/