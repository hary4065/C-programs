main()
{
    int x = 0;
    printf("Enter any character : ");
    x = getintonly();
    printf("\nYou have entered : %d", x);
    return 0;
}
int getintonly()
{
    int num = 0, ch;
    do
    {
        ch = getch();
        if (ch >= 48 && ch <= 57)
        {
            printf("%d", ch);
            num = num * 10 + (ch - 48);
        }
        if (ch == 13)
            break;
    } while (1);
    return num;
}