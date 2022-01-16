/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:42:42 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/16 13:31:46 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*p;
	size_t	i;
	size_t	big_len;
	size_t	little_len;

	p = (char *)big;
	if (little[0] == '\0')
		return (p);
	i = 0;
	little_len = ft_strlen(little);
	big_len = ft_strlen(big);
	if (big_len < len)
		len = big_len;
	if (len < little_len)
		return (NULL);
	while (i <= len - little_len)
	{
		if (ft_strncmp(big + i, little, little_len) == 0)
			return (p + i);
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	// Parameters
	char s1[] = "Hello World!! How How are you?";
	char s2[] = "How are";
	char s3[] = "???";
	char s4[] = "";
	size_t n1 = 24;
	size_t n2 = 25;
	size_t n3 = 1000;
	size_t n4 = 0;

	// printf("---------- strnstr ----------\n");
	// char *res1 = strnstr(s1, s2, n1);
	// printf("strnstr(\"%s\", \"%s\", %ld) = \"%s\"\n", s1, s2, n1, res1);
	// char *res2 = strnstr(s1, s2, n2);
	// printf("strnstr(\"%s\", \"%s\", %ld) = \"%s\"\n", s1, s2, n2, res2);
	// char *res3 = strnstr(s1, s3, n3);
	// printf("strnstr(\"%s\", \"%s\", %ld) = \"%s\"\n", s1, s3, n3, res3);
	// char *res4 = strnstr(s1, s4, n3);
	// printf("strnstr(\"%s\", \"%s\", %ld) = \"%s\"\n", s1, s4, n3, res4);
	// char *res5 = strnstr(s4, s3, n3);
	// printf("strnstr(\"%s\", \"%s\", %ld) = \"%s\"\n", s4, s3, n3, res5);
	// char *res6 = strnstr(s1, s2, n4);
	// printf("strnstr(\"%s\", \"%s\", %ld) = \"%s\"\n", s1, s2, n4, res6);

	printf("---------- ft_strnstr ----------\n");
	char *res7 = ft_strnstr(s1, s2, n1);
	printf("ft_strnstr(\"%s\", \"%s\", %ld) = \"%s\"\n", s1, s2, n1, res7);
	char *res8 = ft_strnstr(s1, s2, n2);
	printf("ft_strnstr(\"%s\", \"%s\", %ld) = \"%s\"\n", s1, s2, n2, res8);
	char *res9 = ft_strnstr(s1, s3, n3);
	printf("ft_strnstr(\"%s\", \"%s\", %ld) = \"%s\"\n", s1, s3, n3, res9);
	char *res10 = ft_strnstr(s1, s4, n3);
	printf("ft_strnstr(\"%s\", \"%s\", %ld) = \"%s\"\n", s1, s4, n3, res10);
	char *res11 = ft_strnstr(s4, s3, n3);
	printf("ft_strnstr(\"%s\", \"%s\", %ld) = \"%s\"\n", s4, s3, n3, res11);
	char *res12 = ft_strnstr(s1, s2, n4);
	printf("ft_strnstr(\"%s\", \"%s\", %ld) = \"%s\"\n", s1, s2, n4, res12);

	return (0);
}
*/
