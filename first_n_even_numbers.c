int main(int argc, char const *argv[])
{
    int i = 1, n;
    printf("Enter how many first n number you want to print : ");
    scanf("%d", &n);
    do
    {
        printf(" %4d", 2 * i++);
    } while (i <= n); //run n times

    /*  runs n+1 times
    while (i <= n) 
    {
        printf(" %4d", i++);
    }
    
    runs n+1 times
    for (i = 1; i <= n; i++) 
    {
        printf(" %4d", i);
    }

    */
    return 0;
}
