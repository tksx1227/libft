/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 22:19:58 by ttomori           #+#    #+#             */
/*   Updated: 2021/12/29 22:23:57 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(char c)
{
	if ('A' <= c && c <= 'Z')
		return (c + 32);
	return (c);
}

/*
int	main(void)
{
	// Parameters
	char c1 = 'R';
	char c2 = 'e';

	printf("---------- tolower ----------\n");
	printf("tolower(%c) = %c\n", c1, tolower(c1));
	printf("tolower(%c) = %c\n", c2, tolower(c2));
	
	printf("---------- ft_tolower ----------\n");
	printf("ft_tolower(%c) = %c\n", c1, ft_tolower(c1));
	printf("ft_tolower(%c) = %c\n", c2, ft_tolower(c2));
	return (0);
}
*/
