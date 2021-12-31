/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:51:48 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/01 01:20:15 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*p;

	len = ft_strlen(s);
	p = (char *)malloc(len + 1);
	ft_memmove(p, s, len + 1);
	return (p);
}

/*
int	main(void)
{
	// Parameters
	char s[] = "Hello World!!";

	printf("---------- strdup ----------\n");
	char *res1 = strdup(s);
	printf("str = %s, address = %p\n", s, s);
	printf("res = %s, address = %p\n", res1, res1);

	printf("---------- ft_strdup ----------\n");
	char *res2 = ft_strdup(s);
	printf("str = %s, address = %p\n", s, s);
	printf("res = %s, address = %p\n", res2, res2);
	return (0);
}
*/
