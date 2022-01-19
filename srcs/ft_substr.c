/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 22:26:02 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/20 00:10:42 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, size_t start, size_t maxlen)
{
	char	*p;
	size_t	len;
	size_t	size;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	if (len <= start)
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (maxlen < size)
		size = maxlen;
	p = (char *)ft_calloc(size + 1, sizeof(char));
	if (p == NULL)
		return (NULL);
	ft_memmove(p, s + start, size);
	return (p);
}
