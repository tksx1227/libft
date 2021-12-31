/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 21:28:37 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/01 01:17:59 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	char	*p1;
	char	*p2;

	p1 = (char *)s1;
	p2 = (char *)s2;
	while (*p1 != '\0' || *p2 != '\0')
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
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

	printf("---------- strcmp ----------\n");
	printf("strcmp(\"%s\", \"%s\") = %d\n", s1, s2, strcmp(s1, s2));
	printf("strcmp(\"%s\", \"%s\") = %d\n", s1, s3, strcmp(s1, s3));
	printf("strcmp(\"%s\", \"%s\") = %d\n", s1, s4, strcmp(s1, s4));
	printf("strcmp(\"%s\", \"%s\") = %d\n", s1, s5, strcmp(s1, s5));

	printf("---------- ft_strcmp ----------\n");
	printf("ft_strcmp(\"%s\", \"%s\") = %d\n", s1, s2, ft_strcmp(s1, s2));
	printf("ft_strcmp(\"%s\", \"%s\") = %d\n", s1, s3, ft_strcmp(s1, s3));
	printf("ft_strcmp(\"%s\", \"%s\") = %d\n", s1, s4, ft_strcmp(s1, s4));
	printf("ft_strcmp(\"%s\", \"%s\") = %d\n", s1, s5, ft_strcmp(s1, s5));
	return (0);
}
*/
