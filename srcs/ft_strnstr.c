/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:42:42 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/20 00:07:00 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*p;
	size_t	i;
	size_t	big_len;
	size_t	little_len;

	p = (char *)big;
	if (little[0] == '\0')
		return (p);
	i = 0;
	little_len = ft_strlen(little);
	big_len = ft_strlen(big);
	if (big_len < len)
		len = big_len;
	if (len < little_len)
		return (NULL);
	while (i <= len - little_len)
	{
		if (ft_strncmp(big + i, little, little_len) == 0)
			return (p + i);
		i++;
	}
	return (NULL);
}
