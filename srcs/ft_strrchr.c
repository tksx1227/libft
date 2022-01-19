/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 20:51:03 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/20 00:07:05 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	size;
	char	*p;
	char	target;

	i = 0;
	size = ft_strlen(s) + 1;
	p = (char *)s;
	target = (char)c;
	while (i < size)
	{
		if (p[size - i - 1] == target)
			return (p + size - i - 1);
		i++;
	}
	return (NULL);
}
