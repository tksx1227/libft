/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 22:35:48 by ttomori           #+#    #+#             */
/*   Updated: 2021/12/30 00:43:59 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

/*
int	main(void)
{
	// Parameters
	char c1 = 'q';
	char c2 = '0';

	printf("---------- isdigit ----------\n");
	printf("isdigit(%c) = 0x%04x\n", c1, isdigit(c1));
	printf("isdigit(%c) = 0x%04x\n", c2, isdigit(c2));
	
	printf("---------- ft_isdigit ----------\n");
	printf("ft_isdigit(%c) = 0x%04x\n", c1, ft_isdigit(c1));
	printf("ft_isdigit(%c) = 0x%04x\n", c2, ft_isdigit(c2));
	return (0);
}
*/
