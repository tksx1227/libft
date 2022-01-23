/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 15:32:00 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/20 00:06:32 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	if (size == 0)
		return (srclen);
	i = 0;
	dstlen = ft_strlen(dest);
	while (i + dstlen + 1 < size && src[i] != '\0')
	{
		dest[dstlen + i] = src[i];
		i++;
	}
	dest[dstlen + i] = '\0';
	if (size < dstlen)
		return (srclen + size);
	return (dstlen + srclen);
}
