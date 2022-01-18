/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 22:26:02 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/18 12:49:55 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t maxlen)
{
	void	*p;
	size_t	len;
	size_t	size;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	if (len < (size_t)start)
		start = len;
	size = ft_strlen(&s[start]);
	if (maxlen < size)
		size = maxlen;
	p = ft_calloc(size + 1, sizeof(char));
	if (p == NULL)
		return (NULL);
	ft_memmove(p, (void *)(s + start), size);
	return ((char *)p);
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
	free(res1);
	free(res2);

	char *res3 = ft_substr(s, start2, maxlen1);
	printf("ft_substr(\"%s\", %d, %ld) = \"%s\"\n", s, start2, maxlen1, res3);
	char *res4 = ft_substr(s, start2, maxlen2);
	printf("ft_substr(\"%s\", %d, %ld) = \"%s\"\n", s, start2, maxlen2, res4);
	free(res3);
	free(res4);

	return (0);
}
*/
