main()
{
    int i = 0;
    char c[100];
    printf("Enter a string.\n");
    gets(c);
    for (i = 0; c[i] != '\0'; i++)
        ;
    printf("Length of string is %d ", i);
}