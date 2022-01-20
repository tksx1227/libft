/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 09:40:49 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/21 00:41:44 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		free_all(char **array);
static size_t	count_elem(char const *s, char c);
static int		split_str(char **array, char *src, char c, size_t size);

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
		array[i] = ft_substr(src, head, tail - head);
		if (array[i] == NULL)
			return (-1);
		i++;
	}
	return (1);
}
