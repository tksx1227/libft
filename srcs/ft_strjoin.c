/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 00:28:58 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/16 18:39:08 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	void	*p;
	size_t	len1;
	size_t	len2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if ((SIZE_MAX - len1) <= len2)
		return (NULL);
	p = ft_calloc(sizeof(char), len1 + len2 + 1);
	if (p == NULL)
		return (NULL);
	ft_memmove(p, (void *)s1, len1);
	ft_memmove(p + len1, (void *)s2, len2);
	return ((char *)p);
}

/*
int	main(void)
{
	// Parameters
	char s1[] = "Hello";
	char s2[] = " World!!";
	char s3[] = "";

	char *res1 = ft_strjoin(s1, s2);
	printf("ft_strjoin(\"%s\", \"%s\") = \"%s\"\n", s1, s2, res1);
	free(res1);

	char *res2 = ft_strjoin(s1, s3);
	printf("ft_strjoin(\"%s\", \"%s\") = \"%s\"\n", s1, s3, res2);
	free(res2);
	return (0);
}
*/
