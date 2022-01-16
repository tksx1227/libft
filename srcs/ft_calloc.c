/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 21:53:47 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/16 09:23:25 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	total_size;

	if (SIZE_MAX / size < count)
		return (NULL);
	total_size = count * size;
	if (total_size == 0)
		total_size = 1;
	p = malloc(total_size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, total_size);
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
