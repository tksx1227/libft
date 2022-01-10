/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 20:51:03 by ttomori           #+#    #+#             */
/*   Updated: 2021/12/31 21:06:13 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	len;
	char	*p;

	i = 0;
	len = ft_strlen(s) + 1;
	p = (char *)s;
	while (i < len)
	{
		if (p[len - i] == c)
			return (p + len - i);
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	// Parameters
	char s[] = "Hello World!!!";
	char c1 = 'o';
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
