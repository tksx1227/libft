/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 20:29:54 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/20 00:06:05 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;
	size_t	size;

	size = ft_strlen(s) + 1;
	p = (char *)ft_memchr((void *)s, c, size);
	if (p == NULL)
		return (NULL);
	return (p);
}
