main()
{
    int i, j;
    char c[100], ch;
    printf("Enter a string.\n");
    gets(c);
    for (i = 0; c[i] != '\0'; i++)
        ;
    /* var i should start from 0 as if no string is entered then
    length should be zero not 1. */
    printf("length is %d\n", i);
    printf("Before reversing %s\n", c);
    /*indexing wil start from 0 so last index will be (length-1).
    Now swap first and last character. Then swap 2nd and 2nd last
    character and so on.. */
    for (j = 0; j < i / 2; j++)
    {
        ch = c[j];
        c[j] = c[i - 1 - j];
        c[i - 1 - j] = ch;
    }
    printf("After reversing %s\n", c);
}