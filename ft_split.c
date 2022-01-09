/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 09:40:49 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/09 12:38:20 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_char(char const *s, char c)
{
	int		counter;
	char	*p;

	counter = 0;
	p = (char *)s;
	while (*p != '\0')
	{
		if (*p == c)
			counter++;
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

	size = count_char(s, c) + 1;
	str_array = (char **)malloc(sizeof(char *) * (size + 1));
	if (str_array == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
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

int	main(void)
{
	// Parameters
	char s[] = "ABCDABCDABCD!!!!AB";
	char c1 = 'C';
	char c2 = 'A';
	char c3 = '!';
	char c4 = 'O';

	printf("----------------------------------------\n");
	printf("str = \"%s\", delimiter = '%c'\n", s, c1);
	printf("----------------------------------------\n");
	char **res1 = ft_split(s, c1);
	print_array(res1);
	free_all(res1);

	printf("----------------------------------------\n");
	printf("str = \"%s\", delimiter = '%c'\n", s, c2);
	printf("----------------------------------------\n");
	char **res2 = ft_split(s, c2);
	print_array(res2);
	free_all(res2);

	printf("----------------------------------------\n");
	printf("str = \"%s\", delimiter = '%c'\n", s, c3);
	printf("----------------------------------------\n");
	char **res3 = ft_split(s, c3);
	print_array(res3);
	free_all(res3);

	printf("----------------------------------------\n");
	printf("str = \"%s\", delimiter = '%c'\n", s, c4);
	printf("----------------------------------------\n");
	char **res4 = ft_split(s, c4);
	print_array(res4);
	free_all(res4);

	return (0);
}
*/
