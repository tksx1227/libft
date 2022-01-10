/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 22:35:48 by ttomori           #+#    #+#             */
/*   Updated: 2021/12/30 00:48:45 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((0 <= c && c <= 31) || c == 127)
		return (0);
	return (1);
}

/*
int	main(void)
{
	// Parameters
	int c1 = 127;
	int c2 = 100;
	int c3 = 31;

	printf("---------- isprint ----------\n");
	printf("isprint(0x%08X) = 0x%04x\n", c1, isprint(c1));
	printf("isprint(0x%08X) = 0x%04x\n", c2, isprint(c2));
	printf("isprint(0x%08X) = 0x%04x\n", c3, isprint(c3));

	printf("---------- ft_isprint ----------\n");
	printf("ft_isprint(0x%08X) = 0x%04x\n", c1, ft_isprint(c1));
	printf("ft_isprint(0x%08X) = 0x%04x\n", c2, ft_isprint(c2));
	printf("ft_isprint(0x%08X) = 0x%04x\n", c3, ft_isprint(c3));
	return (0);
}
*/
