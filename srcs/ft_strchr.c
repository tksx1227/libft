/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 20:29:54 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/15 23:54:09 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;
	size_t	size;

	size = ft_strlen(s) + 1;
	p = (char *)ft_memchr((void *)s, c, size);
	if (p == NULL)
		return (NULL);
	return (p);
}

/*
int	main(void)
{
	// Parameters
	char s[] = "Hello World!!!";
	char c1 = 'o';
	char c2 = '\0';
	char c3 = 'u';

	printf("---------- strchr ----------\n");
	printf("strchr(\"%s\", '%c') = %s\n", s, c1, strchr(s, c1));
	printf("strchr(\"%s\", '%c') = %s\n", s, c2, strchr(s, c2));
	printf("strchr(\"%s\", '%c') = %s\n", s, c3, strchr(s, c3));

	printf("---------- ft_strchr ----------\n");
	printf("ft_strchr(\"%s\", '%c') = %s\n", s, c1, ft_strchr(s, c1));
	printf("ft_strchr(\"%s\", '%c') = %s\n", s, c2, ft_strchr(s, c2));
	printf("ft_strchr(\"%s\", '%c') = %s\n", s, c3, ft_strchr(s, c3));
	return (0);
}
*/
