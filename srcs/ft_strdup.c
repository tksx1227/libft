/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:51:48 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/30 15:40:06 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*p;

	len = ft_strlen(s);
	p = (char *)ft_calloc(len + 1, sizeof(char));
	if (p == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_memmove(p, s, len);
	return (p);
}
