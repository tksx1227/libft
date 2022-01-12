/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 21:53:47 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/12 11:57:19 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	size_t	total_size;
	char	*p;

	total_size = count * size;
	p = (char *)malloc(total_size);
	if (p == NULL)
		return (NULL);
	i = 0;
	p[i++] = 0;
	while (i < total_size)
	{
		p[i] = 0;
		i++;
	}
	return ((void *)p);
}

/*
int	main(void)
{
	// Parameters
	size_t n = 10;
	size_t size = sizeof(int);

	printf("---------- calloc ----------\n");
	int	*p1 = (int *)calloc(n, size);
	for (size_t i = 0; i < n / 2; i++)
		p1[i] = i * 10;
	for (size_t i = 0; i < n; i++)
		printf("%d ", p1[i]);
	free(p1);
	printf("\n");

	printf("---------- ft_calloc ----------\n");
	int	*p2 = (int *)ft_calloc(n, size);
	for (size_t i = 0; i < n / 2; i++)
		p2[i] = i * 10;
	for (size_t i = 0; i < n; i++)
		printf("%d ", p2[i]);
	printf("\n");
	free(p2);
	return (0);
}
*/
