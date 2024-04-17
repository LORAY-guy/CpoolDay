void print_char(char c);

void my_print_revert(char *toRevert)
{
    for (int i = sizeof(toRevert); i >= 0 ; i--)
    {
        print_char(toRevert[i]);
    }
}

/*int main(void)
{
    my_print_revert("codingclub");
    return 0;
}*/