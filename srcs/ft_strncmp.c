/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 01:03:18 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/01 01:25:48 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	char	*p1;
	char	*p2;

	i = 0;
	p1 = (char *)s1;
	p2 = (char *)s2;
	while (i < n && (*p1 != '\0' || *p2 != '\0'))
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		i++;
		p1++;
		p2++;
	}
	return (0);
}

/*
int	main(void)
{
	// Parameters
	char s1[] = "ABC DEf";
	char s2[] = "ABC DEF";
	char s3[] = "ABC DEf";
	char s4[] = "AbC DEf";
	char s5[] = "ABC D";
	size_t n = 6;

	printf("---------- strncmp ----------\n");
	printf("strncmp(\"%s\", \"%s\", %ld) = %d\n", s1, s2, n, strncmp(s1, s2, n));
	printf("strncmp(\"%s\", \"%s\", %ld) = %d\n", s1, s3, n, strncmp(s1, s3, n));
	printf("strncmp(\"%s\", \"%s\", %ld) = %d\n", s1, s4, n, strncmp(s1, s4, n));
	printf("strncmp(\"%s\", \"%s\", %ld) = %d\n", s1, s5, n, strncmp(s1, s5, n));

	printf("---------- ft_strncmp ----------\n");
	printf("ft_strncmp(\"%s\", \"%s\", %ld) = %d\n",
		s1, s2, n, ft_strncmp(s1, s2, n));
	printf("ft_strncmp(\"%s\", \"%s\", %ld) = %d\n",
		s1, s3, n, ft_strncmp(s1, s3, n));
	printf("ft_strncmp(\"%s\", \"%s\", %ld) = %d\n",
		s1, s4, n, ft_strncmp(s1, s4, n));
	printf("ft_strncmp(\"%s\", \"%s\", %ld) = %d\n",
		s1, s5, n, ft_strncmp(s1, s5, n));
	return (0);
}
*/
