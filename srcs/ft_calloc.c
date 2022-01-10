/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 21:53:47 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/08 11:44:00 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (count == 0 || size == 0 || ULONG_MAX / count <= size)
		return (NULL);
	p = malloc(count * size);
	if (p == NULL)
		return (NULL);
	return (p);
}

/*
int	main(void)
{
	// Parameters
	size_t n = 10;
	size_t size = sizeof(int);

	printf("---------- calloc ----------\n");
	int	*p1 = (int *)calloc(n, size);
	for (size_t i = 0; i < n; i++)
		p1[i] = i * 10;
	for (size_t i = 0; i < n; i++)
		printf("%d ", p1[i]);
	printf("\n");

	printf("---------- ft_calloc ----------\n");
	int	*p2 = (int *)ft_calloc(n, size);
	for (size_t i = 0; i < n; i++)
		p2[i] = i * 10;
	for (size_t i = 0; i < n; i++)
		printf("%d ", p2[i]);
	printf("\n");
	return (0);
}
*/
