#include <stdio.h>
void repeated(char *);
int main()
{
    char str[50];
    printf("enter the string :");
    fgets(str,50,stdin);
    repeated(str);
    printf("\n");
}
void repeated(char str[])
{
    int i, j, count = 0;

    for (i = 0; str[i]; i++)
    {
        for (j = i + 1; str[j]; j++)
        {
            if (str[i] == str[j])

                printf("%c ", str[i]);
        }
    }
}

