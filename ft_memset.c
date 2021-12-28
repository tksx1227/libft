/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:52:04 by ttomori           #+#    #+#             */
/*   Updated: 2021/12/28 23:40:40 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	uc;
	unsigned char	*p;

	uc = (unsigned char)c;
	p = (unsigned char *)s;
	while (n-- > 0)
		*(p + n) = uc;
	return (s);
}

/*
int	main(void)
{
	char	str[] = "0123456789";
	
	ft_memset(str + 2, '*', 5);
	printf("%s\n", str);
	return (0);
}
*/
