/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 22:35:48 by ttomori           #+#    #+#             */
/*   Updated: 2021/12/29 22:45:01 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	return (0);
}

/*
int	main(void)
{
	// Parameters
	char c1 = '#';
	char c2 = 'm';
	char c3 = 'Q';

	printf("---------- isalpha ----------\n");
	printf("isalpha(%c) = 0x%04x\n", c1, isalpha(c1));
	printf("isalpha(%c) = 0x%04x\n", c2, isalpha(c2));
	printf("isalpha(%c) = 0x%04x\n", c3, isalpha(c3));
	
	printf("---------- ft_isalpha ----------\n");
	printf("ft_isalpha(%c) = 0x%04x\n", c1, ft_isalpha(c1));
	printf("ft_isalpha(%c) = 0x%04x\n", c2, ft_isalpha(c2));
	printf("ft_isalpha(%c) = 0x%04x\n", c3, ft_isalpha(c3));
	return (0);
}
*/
