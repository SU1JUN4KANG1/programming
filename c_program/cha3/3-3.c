#include <stdio.h>

void expand(char s1[], char s2[]);

int isDigital(int c);
int isLowwer(int c);
int isUpper(int c);

int main()
{
    char s1[] = "0-9 \n A-Z- \n a-5 \n h-k";
    char s2[500];
    expand(s1, s2);

    printf("%s\n", s2);
    return 0;
}

void expand(char s1[], char s2[])
{
    int i, j, c;
    i = j = 0;
    while (s1[i] != '\0')
    {
        if (s1[i] == '-')
        {
            if (isDigital(s1[i - 1]) && isDigital(s1[i + 1]) || isLowwer(s1[i - 1]) && isLowwer(s1[i + 1]) || isUpper(s1[i - 1]) && isUpper(s1[i + 1]))
            {
                for (c = s1[i - 1] + 1; c <= s1[i + 1]; c++)
                {
                    s2[j++] = c;
                }

                i += 2; 
            }
            else 
            {
                s2[j++] = s1[i++];
                s2[j++] = s1[i++];
            }
        }
        else
        {
            s2[j++] = s1[i++];
        }
    }
    s2[j] = '\0';
}

int isDigital(int c)
{
    if (c >= '0' && c <= '9')
        return 1;
    else
        return 0;
}
int isLowwer(int c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    else
        return 0;
}
int isUpper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return 1;
    else
        return 0;
}
