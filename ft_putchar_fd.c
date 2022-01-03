/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 22:45:30 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/03 22:52:15 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
int	main(void)
{
	// Parameters
	char c = 'X';
	int fd = 1;

	printf("c = %c, fd = %d\n", c, fd);
	ft_putchar_fd(c, fd);
	return (0);
}
*/
