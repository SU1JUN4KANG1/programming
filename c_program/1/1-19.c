#include <stdio.h>
#define MAXLINE 1000	//允许输入行的最大长度
 
int getline(char line[], int maxline);
void reverse(char s[]);
 
//打印最长输入行
int main()
{
	char line[MAXLINE];		//当前输入行
 
	while ( getline(line, MAXLINE) > 0)
	{
		reverse(line);
		printf("%s", line);
	}
 
	return 0;
}
 
void reverse(char s[])
{
	int i, j;
	char temp;
 
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	if (s[i] == '\n')
	{
		i--;
	}
 
	j = 0;
	while (j < i)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		--i;
		++j;
	}
}
 
//读入一行到s中并且返回长度
int getline(char s[], int lim)
{
	int c, i, j;
 
	j = 0;
	for (i = 0; (c = getchar()) != EOF&&c != '\n'; ++i)
	{
		if (i < lim - 2)
		{
			s[j] = c;
			++j;
		}
		
	}
	if (c == '\n')
	{
		s[j] = c;
		++i;
		++j;
	}
 
	s[j] = '\0';
 
	return i;
}
