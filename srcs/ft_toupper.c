/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 22:10:03 by ttomori           #+#    #+#             */
/*   Updated: 2021/12/29 22:30:40 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - 32);
	return (c);
}

/*
int	main(void)
{
	// Parameters
	char c1 = 'g';
	char c2 = 'R';

	printf("---------- toupper ----------\n");
	printf("toupper(%c) = %c\n", c1, toupper(c1));
	printf("toupper(%c) = %c\n", c2, toupper(c2));

	printf("---------- ft_toupper ----------\n");
	printf("ft_toupper(%c) = %c\n", c1, ft_toupper(c1));
	printf("ft_toupper(%c) = %c\n", c2, ft_toupper(c2));
	return (0);
}
*/
