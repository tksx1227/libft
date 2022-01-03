/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:20:26 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/03 22:09:46 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
int	main(void)
{
	// Parameters
	char c1 = 'A';
	char c2 = '\n';

	printf("---------- putchar ----------\n");
	printf("putchar(%d) & putchar(%d)\n", c1, c2);
	putchar(c1);
	putchar(c2);

	printf("---------- ft_putchar ----------\n");
	printf("ft_putchar(%d) & ft_putchar(%d)\n", c1, c2);
	ft_putchar(c1);
	ft_putchar(c2);
	return (0);
}
*/
