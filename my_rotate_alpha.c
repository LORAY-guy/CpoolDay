char *my_rotate_alpha(char *sentance)
{
    char rotatedSentance[sizeof(sentance)];
    for (int i = 0; sentance[i] >= 0; i++)
    {
        if (sentance[i] >= 97 && sentance[i] <= 122)
        {

        } else {
            break;
        }
    }
    return rotatedSentance;
}