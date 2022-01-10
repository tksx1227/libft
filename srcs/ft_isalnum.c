/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 22:35:48 by ttomori           #+#    #+#             */
/*   Updated: 2021/12/30 00:22:00 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
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
	char c4 = '7';

	printf("---------- isalnum ----------\n");
	printf("isalnum(%c) = 0x%04x\n", c1, isalnum(c1));
	printf("isalnum(%c) = 0x%04x\n", c2, isalnum(c2));
	printf("isalnum(%c) = 0x%04x\n", c3, isalnum(c3));
	printf("isalnum(%c) = 0x%04x\n", c4, isalnum(c4));
	
	printf("---------- ft_isalnum ----------\n");
	printf("ft_isalnum(%c) = 0x%04x\n", c1, ft_isalnum(c1));
	printf("ft_isalnum(%c) = 0x%04x\n", c2, ft_isalnum(c2));
	printf("ft_isalnum(%c) = 0x%04x\n", c3, ft_isalnum(c3));
	printf("ft_isalnum(%c) = 0x%04x\n", c4, ft_isalnum(c4));
	return (0);
}
*/
