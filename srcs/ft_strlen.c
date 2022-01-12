/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 00:47:54 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/12 10:50:28 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*
int	main(void)
{
	// Parameter
	char *s = "Hello World!!";
	
	printf("---------- strlen ----------\n");
	printf("len(%s) = %ld\n", s, strlen(s));

	printf("----------ft_strlen ----------\n");
	printf("len(%s) = %ld\n", s, ft_strlen(s));
	return (0);
}
*/
