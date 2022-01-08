/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:42:42 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/08 20:34:19 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*p;
	size_t	i;
	size_t	little_len;

	p = (char *)big;
	if (little[0] == '\0')
		return (p);
	i = 0;
	little_len = ft_strlen(little);
	while (i <= len - little_len && *p != '\0')
	{
		if (ft_strncmp(p, little, little_len) == 0)
			return (p);
		p++;
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	// Parameters
	char s1[] = "Hello World!! How How are you?"; // 26
	char s2[] = "How are";
	char s3[] = "???";
	char s4[] = "";
	size_t n1 = 24;
	size_t n2 = 25;
	size_t n3 = 1000;

	char *res1 = ft_strnstr(s1, s2, n1);
	printf("ft_strnstr(\"%s\", \"%s\", %ld) = \"%s\"\n", s1, s2, n1, res1);
	char *res2 = ft_strnstr(s1, s2, n2);
	printf("ft_strnstr(\"%s\", \"%s\", %ld) = \"%s\"\n", s1, s2, n2, res2);
	char *res3 = ft_strnstr(s1, s3, n3);
	printf("ft_strnstr(\"%s\", \"%s\", %ld) = \"%s\"\n", s1, s3, n3, res3);
	char *res4 = ft_strnstr(s1, s4, n3);
	printf("ft_strnstr(\"%s\", \"%s\", %ld) = \"%s\"\n", s1, s4, n3, res4);
	char *res5 = ft_strnstr(s4, s3, n3);
	printf("ft_strnstr(\"%s\", \"%s\", %ld) = \"%s\"\n", s4, s3, n3, res5);

	return (0);
}
*/
