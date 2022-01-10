/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 23:05:14 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/04 23:54:46 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	putnbr_recursion(long long int nbr, int fd)
{
	if (nbr == 0)
		return ;
	putnbr_recursion(nbr / 10, fd);
	ft_putchar_fd((nbr % 10) + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long long int	nbr;

	nbr = (long long int)n;
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar_fd('-', fd);
	}
	else if (nbr == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	putnbr_recursion(nbr, fd);
}

/*
int	main(void)
{
	// Parameter
	int n1 = 2147483647;
	int n2 = -2147483648;
	int n3 = 0;
	int fd = 1;

	ft_putnbr_fd(n1, fd);
	printf("\n");
	ft_putnbr_fd(n2, fd);
	printf("\n");
	ft_putnbr_fd(n3, fd);
	printf("\n");
	return (0);
}
*/
