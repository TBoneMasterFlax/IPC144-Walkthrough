#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SZ 31

int main(void)
{
    char entered[] = "Programming Logic 101 Course";
    char result[SZ] = { 0 };
    int i, j;
    for (j = 0, i = strlen(entered) - 1; i > -1; i--, j++)
    {
        if (isdigit(entered[i]))
        {
            result[j] = 'n';
        }
        else if (isspace(entered[i]))
        {
            result[j] = 's';
        }
        else if (isupper(entered[i]))
        {
            result[j] = 'U';
        }
        else
        {
            result[j] = 'l';
        }
    }
    printf("%s\n", result);
    return 0;
}