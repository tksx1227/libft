/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 22:35:48 by ttomori           #+#    #+#             */
/*   Updated: 2021/12/30 00:40:57 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}

/*
int	main(void)
{
	// Parameters
	char c1 = '@';
	char c2 = '\t';
	int c3 = 300;

	printf("---------- isascii ----------\n");
	printf("isascii(0x%08X) = 0x%04x\n", c1, isascii(c1));
	printf("isascii(0x%08X) = 0x%04x\n", c2, isascii(c2));
	printf("isascii(0x%08X) = 0x%04x\n", c3, isascii(c3));

	printf("---------- ft_isascii ----------\n");
	printf("ft_isascii(0x%08X) = 0x%04x\n", c1, ft_isascii(c1));
	printf("ft_isascii(0x%08X) = 0x%04x\n", c2, ft_isascii(c2));
	printf("ft_isascii(0x%08X) = 0x%04x\n", c3, ft_isascii(c3));
	return (0);
}
*/
