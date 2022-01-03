/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 22:12:11 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/03 22:18:40 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	char	*p;

	p = (char *)s;
	while (*p != '\0')
		ft_putchar(*p++);
}

/*
int	main(void)
{
	// Parameter
	char s[] = "Hello World!!\n";
	ft_putstr(s);
	return (0);
}
*/
