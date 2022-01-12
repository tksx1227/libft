/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:51:48 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/12 13:37:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*p;

	len = ft_strlen(s);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
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
	free(res1);

	printf("---------- ft_strdup ----------\n");
	char *res2 = ft_strdup(s);
	printf("str = %s, address = %p\n", s, s);
	printf("res = %s, address = %p\n", res2, res2);
	free(res2);

	return (0);
}
*/
