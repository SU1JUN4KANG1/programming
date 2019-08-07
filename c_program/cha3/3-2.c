#include <stdio.h>

void readString(char s[]);

void escape(char s[], char t[]);
void unescape(char s[], char t[]);

int main() {
    char s1[500] = "hello world!    ";
    char t1[1000];

    readString(s1);

    escape(s1, t1);
    printf("%s\n", t1);

    unescape(t1, s1);
    printf("%s\n", s1);
    
    return 0;
}


void escape(char s[], char t[])
{
    int i, j;
    i = j = 0;
    while (s[i] != '\0')
    {
        switch (s[i])
        {
        case '\n':
            t[j++] = '\\';
            t[j++] = 'n';
            break;
        case '\t':
            t[j++] = '\\';
            t[j++] = 't';
            break;
        case '\r':
            t[j++] = '\\';
            t[j++] = 'r';
            break;
        default:
            t[j++] = s[i];
            break;
        }
        i++;
    }
    t[j] = s[i];
}

void unescape(char s[], char t[])
{
    int i, j;
    i = j = 0;

    while (s[i] != '\0')
    {
        if (s[i] == '\\')
        {
            switch (s[++i])
            {
            case 'n':
                t[j++] = '\n';
                break;
            case 't':
                t[j++] = '\t';
                break;
            case 'r':
                t[j++] = '\r';
                break;
            default:
                t[j++] = s[i];
                break;
            }
            i++;
        }
        else
        {
            t[j++] = s[i++];
        }
    }
    t[j] = s[i];
}

void readString(char s[])
{
    int c, y;
    y = 0;
    while ((c = getchar()) != EOF)
        s[y++] = c;
}
