/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 01:09:55 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/09 01:22:34 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*p;
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = (unsigned int)ft_strlen(s);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	while (i < len)
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}

/*
static char	f(unsigned int i, char c)
{
	char	res;

	res = (c * i + 33) % 126;
	return (res);
}

int	main(void)
{
	// Parameters
	char s[] = "Hello World!!!";

	char *res = ft_strmapi(s, f);
	printf("Result: \"%s\"\n", res);
	free(res);
	return (0);
}
*/
