/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 22:26:02 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/14 16:32:20 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t maxlen)
{
	size_t	i;
	size_t	len;
	size_t	size;
	char	*p;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	if (len < start)
		start = len;
	size = ft_strlen(&s[start]);
	if (maxlen < size)
		size = maxlen;
	p = (char *)malloc(sizeof(char) * (size + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

/*
int	main(void)
{
	// Parameters
	char s[] = "How are you?";
	unsigned int start1 = 4;
	unsigned int start2 = 100;
	size_t maxlen1 = 3;
	size_t maxlen2 = 100;

	char *res1 = ft_substr(s, start1, maxlen1);
	printf("ft_substr(\"%s\", %d, %ld) = \"%s\"\n", s, start1, maxlen1, res1);
	char *res2 = ft_substr(s, start1, maxlen2);
	printf("ft_substr(\"%s\", %d, %ld) = \"%s\"\n", s, start1, maxlen2, res2);

	char *res3 = ft_substr(s, start2, maxlen1);
	printf("ft_substr(\"%s\", %d, %ld) = \"%s\"\n", s, start2, maxlen1, res3);
	char *res4 = ft_substr(s, start2, maxlen2);
	printf("ft_substr(\"%s\", %d, %ld) = \"%s\"\n", s, start2, maxlen2, res4);
	return (0);
}
*/
