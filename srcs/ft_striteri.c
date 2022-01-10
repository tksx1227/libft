/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 01:25:55 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/09 01:52:27 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (*s != '\0')
		f(i++, s++);
}

/*
static void	f(unsigned int i, char *p)
{
	*p = ((*p * i) % 94) + 33;
}

int	main(void)
{
	// Parameters
	char s[] = "Hello World!!!";

	printf("Before: \"%s\"\n", s);
	ft_striteri(s, f);
	printf("After : \"%s\"\n", s);
	return (0);
}
*/
