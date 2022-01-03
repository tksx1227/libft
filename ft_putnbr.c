/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 22:28:39 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/03 22:42:12 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	putnbr_recursion(long long int nbr)
{
	if (nbr == 0)
		return ;
	putnbr_recursion(nbr / 10);
	putchar((nbr % 10) + '0');
}

void	ft_putnbr(int n)
{
	long long int	nbr;

	nbr = (long long int)n;
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
	}
	else if (nbr == 0)
	{
		ft_putchar('0');
		return ;
	}
	putnbr_recursion(nbr);
}

/*
int	main(void)
{
	// Parameter
	int n1 = 2147483647;
	int n2 = -2147483648;
	int n3 = 0;

	ft_putnbr(n1);
	printf("\n");
	ft_putnbr(n2);
	printf("\n");
	ft_putnbr(n3);
	printf("\n");
	return (0);
}
*/
