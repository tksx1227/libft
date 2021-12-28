/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:51:55 by ttomori           #+#    #+#             */
/*   Updated: 2021/12/28 23:58:35 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;

	p = (char *)s;
	while (n-- > 0)
		*(p + n) = '\0';
}

/*
int	main(void)
{
	char	s[] = "0123456789";

	printf("Original: %s\n", s);
	ft_bzero(s, 3);
	printf("Shift 2 : %s\n", s + 2);
	printf("Shift 3 : %s\n", s + 3);
	return (0);
}
*/
