#include <stdio.h>
#include <string.h>
int main()
{
    char str[5][20], temp[20];
    int i, round, r;
    printf("\nEnter any 5 words or names\n");
    for (int i = 0; i < sizeof str / sizeof str[0]; i++)
        gets(str[i]);
    printf("Got %d input Successfully.\n", sizeof str / sizeof str[0]);
    for (round = 0; round < sizeof str / sizeof str[0]; round++)
        for (i = 0; i < sizeof str / sizeof str[0] - round; i++)
        {
            if (strcmp(str[i], str[i + 1]) < 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[i + 1]);
                strcpy(str[i + 1], temp);
            }
        }
    printf("String in Dictionary Order are\n");
    for (int i = 0; i <= sizeof str / sizeof str[0]; i++)
        puts(str[i]);
}
