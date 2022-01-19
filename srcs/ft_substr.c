/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 22:26:02 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/19 15:02:52 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t maxlen)
{
	char	*p;
	size_t	len;
	size_t	size;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	if (len < (size_t)start)
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
