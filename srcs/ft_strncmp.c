/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 01:03:18 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/14 14:46:41 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
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
