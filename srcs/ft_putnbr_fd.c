/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 23:05:14 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/20 00:05:41 by ttomori          ###   ########.fr       */
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
