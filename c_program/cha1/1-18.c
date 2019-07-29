#include <stdio.h>
#define MAXLINE 10	//允许输入行的最大长度
 
int getline(char line[], int maxline);
int remove(char s[]);
 
//打印最长输入行
int main()
{
	char line[MAXLINE];		//当前输入行
 
	while ( getline(line, MAXLINE) > 0)
	{
		if (remove(line) > 0)
		{
			printf("%s", line);
		}
	}
 
	return 0;
}
 
int remove(char s[])
{
	int i;
 
	i = 0;
	while (s[i] != '\n')
	{
		++i;
	}
	--i;
 
	while (i >= 0 && (s[i] == ' ' || s[i] == '\t'))
	{
		--i;
	}
 
	if (i >= 0)
	{
		++i;
		s[i] = '\n';
		++i;
		s[i] = '\0';
	}
 
	return i;
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
