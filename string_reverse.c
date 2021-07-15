main()
{
    char c[100];
    printf("Enter a string.\n");
    gets(c);
    printf("Before reversing %s\n", c);
    printf("After reversing %s\n", strrev(c));
}