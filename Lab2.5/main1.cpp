#include <stdio.h>

void studentscroe(int *s, int *i, int *CA, int *CB, int *CC, int *CD, int *CF);

int main()
{
    int score, i = 0;
    int CountA = 0, CountB = 0, CountC = 0, CountD = 0, CountF = 0;

    studentscroe(&score, &i, &CountA, &CountB, &CountC, &CountD, &CountF);

    return 0;
}

void studentscroe(int *s, int *i, int *CA, int *CB, int *CC, int *CD, int *CF)
{
    while (*s != -1)
    {

        printf("Enter your Score [%d]: ", *i + 1);
        if (scanf("%d", s) != 1)
        {
            printf("Pleses try again");
            break;
        }

        if (*s >= 80)
        {
            *CA += 1;
        }
        else if (*s >= 70)
        {
            *CB += 1;
        }
        else if (*s >= 60)
        {
            *CC += 1;
        }
        else if (*s >= 50)
        {
            *CD += 1;
        }
        else if (*s < 50 && *s != -1)
        {
            *CF += 1;
        }
        *i = *i + 1;
    }

    if (*s == -1)
    {
        printf("Grade A Count: %d people\n", *CA);
        printf("Grade C Count: %d people\n", *CB);
        printf("Grade B Count: %d people\n", *CC);
        printf("Grade D Count: %d people\n", *CD);
        printf("Grade F Count: %d people\n", *CF);
    }
}
