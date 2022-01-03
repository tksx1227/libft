/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:20:26 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/03 12:40:17 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (c);
}

/*
int	main(void)
{
	// Parameters
	char c1 = 'A';
	char c2 = '\n';

	printf("---------- putchar ----------\n");
	printf("putchar(%d) & putchar(%d)\n", c1, c2);
	int res1 = putchar(c1);
	int res2 = putchar(c2);
	printf("Result1 = %d, Result2 = %d\n", res1, res2);

	printf("---------- ft_putchar ----------\n");
	printf("ft_putchar(%d) & ft_putchar(%d)\n", c1, c2);
	int res3 = ft_putchar(c1);
	int res4 = ft_putchar(c2);
	printf("Result1 = %d, Result2 = %d\n", res3, res4);
	return (0);
}
*/
