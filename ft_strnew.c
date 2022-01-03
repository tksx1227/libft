/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 00:03:33 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/04 00:22:37 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *)malloc(size + 1);
	if (p == NULL)
		return (NULL);
	while (i <= size)
	{
		p[i] = '\0';
		i++;
	}
	return (p);
}

/*
int	main(void)
{
	// Parameters
	size_t size = sizeof(char) * 4;
	char *p = ft_strnew(size);

	p[0] = 'A';
	p[1] = 'B';
	p[2] = 'C';
	p[3] = 'D';
	printf("size = %ld\n", size);
	printf("Address: %p\n", p);
	printf("Value: %s\n", p);
	return (0);
}
*/
