#include "push_swap.h"

size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

long long ft_atoi(const char *str)
{
	int i;
	int n;
	size_t result;

	i = 0;
	n = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			n = -1;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + str[i] - 48;
		if ((result > 2147483647ull && n ==1 ) || (result > 2147483648ull && n == -1))
		{

			return (INT_MAX + 1ull);
		}
		i++;
	}
	return ((result * n));
}

char *ft_strjoin(char const *s1, char const *s2)
{
	int len;
	int i;
	char *p;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	p = malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	while (*s1)
		p[i++] = *s1++;
	while (*s2)
		p[i++] = *s2++;
	p[i] = '\0';
	return (p);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	unsigned int l_len;
	char *p;

	if (!s)
		return (NULL);
	l_len = ft_strlen(s);
	i = 0;
	if (start > l_len)
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	p = malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	while (i < len)
	{
		p[i] = s[start];
		start++;
		i++;
	}
	p[i] = '\0';
	return (p);
}

int ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
