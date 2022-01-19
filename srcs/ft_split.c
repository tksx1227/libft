/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 09:40:49 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/19 15:22:26 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_all(char **array)
{
	size_t	i;

	i = 0;
	while (array[i] != NULL)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static size_t	count_elem(char const *s, char c)
{
	char	*p;
	size_t	counter;

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

static char	*ft_substr_temp(const char *s, size_t start, size_t maxlen)
{
	char	*p;
	size_t	len;
	size_t	size;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	if (len <= start)
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (maxlen < size)
		size = maxlen;
	p = (char *)ft_calloc(size + 1, sizeof(char));
	if (p == NULL)
		return (NULL);
	ft_memmove(p, s + start, size);
	return (p);
}

static int	split_str(char **array, char *src, char c, size_t size)
{
	size_t	i;
	size_t	head;
	size_t	tail;

	i = 0;
	tail = 0;
	while (i < size)
	{
		head = tail;
		while (src[head] != '\0' && src[head] == c)
			head++;
		tail = head;
		while (src[tail] != '\0' && src[tail] != c)
			tail++;
		array[i] = ft_substr_temp(src, head, tail - head);
		if (array[i] == NULL)
			return (-1);
		i++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		res;
	size_t	size;
	char	**str_array;

	if (s == NULL)
		return (NULL);
	size = count_elem(s, c);
	str_array = (char **)malloc(sizeof(char *) * (size + 1));
	if (str_array == NULL)
		return (NULL);
	res = split_str(str_array, (char *)s, c, size);
	if (res == -1)
	{
		free_all(str_array);
		return (NULL);
	}
	str_array[size] = NULL;
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
