#include "push_swap.h"
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*p;

	i = 0;
	len = ft_strlen(s1);
	p = malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	unsigned int	l_len;
	char			*p;

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

static int	ft_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			len++;
			while (*s != '\0' && *s != c)
				s++;
		}
		else
			s++;
	}
	return (len);
}

static int	size_word(char const *s, char c, int i)
{
	int	j;

	j = 0;
	while (s[i] != c && s[i])
	{
		j++;
		i++;
	}
	return (j);
}

static void	ft_free(char **s)
{
	int	i;

	i = 0;
	while (s[i])
		free(s[i++]);
	free(s);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**p;
	int		j;

	if (!s)
		return (NULL);
	i = 0;
	j = -1;
	p = (char **)malloc(sizeof(char *) * (ft_len(s, c) + 1));
	if (!p)
		return (NULL);
	while (++j < ft_len(s, c))
	{
		while (s[i] == c)
			i++;
		p[j] = ft_substr(s, i, size_word(s, c, i));
		if (!p[j])
		{
			ft_free(p);
			return (NULL);
		}
		i += size_word(s, c, i);
	}
	p[j] = NULL;
	return (p);
}


char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	int		i;
	char	*p;

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



