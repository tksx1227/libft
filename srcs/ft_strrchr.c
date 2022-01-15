/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 20:51:03 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/16 01:39:44 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	size;
	char	*p;
	char	target;

	i = 0;
	size = ft_strlen(s) + 1;
	p = (char *)s;
	target = (char)c;
	while (i < size)
	{
		if (p[size - i - 1] == target)
			return (p + size - i - 1);
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	// Parameters
	char s[] = "Hello World!!!";
	char c1 = 'H';
	char c2 = '\0';
	char c3 = 'u';
	printf("---------- strrchr ----------\n");
	printf("strrchr(\"%s\", '%c') = %s\n", s, c1, strrchr(s, c1));
	printf("strrchr(\"%s\", '%c') = %s\n", s, c2, strrchr(s, c2));
	printf("strrchr(\"%s\", '%c') = %s\n", s, c3, strrchr(s, c3));

	printf("---------- ft_strrchr ----------\n");
	printf("ft_strrchr(\"%s\", '%c') = %s\n", s, c1, ft_strrchr(s, c1));
	printf("ft_strrchr(\"%s\", '%c') = %s\n", s, c2, ft_strrchr(s, c2));
	printf("ft_strrchr(\"%s\", '%c') = %s\n", s, c3, ft_strrchr(s, c3));
	return (0);
}
*/
