/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 09:40:49 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/09 23:30:50 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_elem(char const *s, char c)
{
	char	*p;
	int		counter;

	counter = 0;
	p = (char *)s;
	while (*p != '\0')
	{
		while (*p != '\0' && *p == c)
			p++;
		if (*p != '\0')
			counter++;
		while (*p != '\0' && *p != c)
			p++;
	}
	return (counter);
}

static char	*ft_strndup(char *s, size_t n)
{
	size_t	i;
	size_t	len;
	char	*p;

	len = ft_strlen(s);
	if (len < n)
		n = len;
	p = (char *)malloc(sizeof(char) * (n + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		size;
	size_t	len;
	char	*head;
	char	**str_array;

	size = count_elem(s, c);
	str_array = (char **)malloc(sizeof(char *) * (size + 1));
	if (str_array == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		while (*s != '\0' && *s == c)
			s++;
		len = 0;
		head = (char *)s;
		while (*s != '\0' && *s++ != c)
			len++;
		str_array[i++] = ft_strndup(head, len);
	}
	str_array[i] = NULL;
	return (str_array);
}

/*
static void	print_array(char **s)
{
	int	i;

	i = 0;
	while (s[i] != NULL)
	{
		printf("array[%d] = \"%s\"\n", i, s[i]);
		i++;
	}
}

static void	free_all(char **s)
{
	for (int i = 0; s[i] != NULL; i++)
		free(s[i]);
	free(s);
}

void	do_test(char *s, char c)
{
	printf("str = \"%s\", delimiter = '%c'\n", s, c);
	char **res = ft_split(s, c);
	print_array(res);
	printf("------------------------------------------\n");
	free_all(res);
}

int	main(void)
{
	// Parameters
	char s1[] = "ABCDABC DABCD!!!!AB";
	char s2[] = "";
	char s3[] = "CCCCCCCCC";
	char s4[] = " ";
	char c1 = 'C';
	char c2 = 'A';
	char c3 = '!';
	char c4 = 'O';
	char c5 = ' ';

	do_test(s1, c1);
	do_test(s1, c2);
	do_test(s1, c3);
	do_test(s1, c4);
	do_test(s1, c5);
	do_test(s2, c1);
	do_test(s3, c1);
	do_test(s4, c1);

	return (0);
}
*/
