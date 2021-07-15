#include <stdio.h>
#include <string.h>
int indexofsubstring(char *str, char *sub);
int main()
{
    int index;
    index = indexofsubstring("chareiouAEIOU ", "iou");
    if (index)
        printf("Substring starts at index %d", index);
    else
        printf("Substring Not Found");
}
int indexofsubstring(char *str, char *sub)
{
    int i = 0, j = 0;
    while (str[i])
    {
        if (sub[j] != str[i])
            i++;
        else
        {
            while (sub[j] == str[i])
            {
                i++;
                j++;
                if (str[j])
                    return (i - j);
            }
            j = 0;
            i++;
        }
    }
    return 0;
}
