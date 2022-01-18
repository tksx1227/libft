/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 01:09:55 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/18 12:58:26 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	size_t	i;
	size_t	len;

	if (s == NULL)
		return (NULL);
	if (f == NULL)
		return (ft_strdup(s));
	i = 0;
	len = ft_strlen(s);
	if ((size_t)UINT_MAX <= len)
		return (NULL);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	while (i < len)
	{
		p[i] = f((unsigned int)i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}

/*
static char	f(unsigned int i, char c)
{
	char	res;

	res = ((c * i) % 94) + 33;
	return (res);
}

int	main(void)
{
	// Parameters
	char s[] = "Hello World!!!";

	char *res = ft_strmapi(s, f);
	printf("Original: \"%s\"\n", s);
	printf("Result  : \"%s\"\n", res);
	free(res);
	return (0);
}
*/
