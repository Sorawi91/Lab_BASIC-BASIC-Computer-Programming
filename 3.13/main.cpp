#include <stdio.h>

int main()
{
    char text[101], c, d, z, x;
    int countUpper = 0;
    int countLower = 0;
    int countDigit = 0;
    int countOther = 0;
    int i;

    if (scanf("%s", text) != 1)
    {
        return 1;
    }

    for (i = 0; text[i] != '\0'; i++)
    {

        int other = 0;
        for (c = 'A'; c <= 'Z'; c++)
        {
            if (text[i] == c)
            {
                countUpper += 1;
                other++;
                break;
            }
        }
        for (d = 'a'; d <= 'z'; d++)
        {
            if (text[i] == d)
            {
                countLower += 1;
                other++;
                break;
            }
        }
        for (x = '0'; x <= '9'; x++)
        {
            if (text[i] == x)
            {
                countDigit += 1;
                other++;
                break;
            }
        }
        if (other == 0)
        {
            countOther += 1;
        }
    }

    printf("Uppercase: %d\n", countUpper);
    printf("Lowercase: %d\n", countLower);
    printf("Digits: %d\n", countDigit);
    printf("Special/Other: %d\n", countOther);
    return 0;
}
