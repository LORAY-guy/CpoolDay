void print_number(int value);

void my_fibonacci(int mimimum, int maximum)
{
    int num = 0;
    while (num <= maximum)
    {
        num = num-1 + num-2;
        print_number(num);
    }
}

/*int main(void)
{
    int minimum = 0;
    int maximum = 10;

    my_fibonacci(minimum, maximum);
    return 0;
}*/