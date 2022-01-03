/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 00:30:49 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/04 00:36:21 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	while (*s != '\0')
		*s++ = '\0';
}

/*
int	main(void)
{
	// Parameter
	char s[] = "Hello World";
	size_t len = ft_strlen(s);

	printf("---------- Before ----------\n");
	for (size_t i = 0; i <= len; i++)
		printf("0x%03X ", s[i]);
	printf("\n");
	ft_strclr(s);

	printf("---------- After ----------\n");
	for (size_t i = 0; i <= len; i++)
		printf("0x%03X ", s[i]);
	printf("\n");
	return (0);
}
*/
