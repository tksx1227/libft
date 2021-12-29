/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 00:47:54 by ttomori           #+#    #+#             */
/*   Updated: 2021/12/29 17:40:33 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*s++ != '\0')
		len++;
	return (len);
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
