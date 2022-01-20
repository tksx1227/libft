/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 00:59:49 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/21 00:42:51 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_included(const char *s, char c);

char	*ft_strtrim(char const *s, char const *set)
{
	char	*p;
	size_t	len;
	size_t	end_idx;
	size_t	start_idx;

	if (s == NULL || set == NULL)
		return (NULL);
	start_idx = 0;
	len = ft_strlen(s);
	if (len == 0)
		return (ft_strdup(""));
	while (is_included(set, s[start_idx]))
		start_idx++;
	end_idx = len - 1;
	while (start_idx < end_idx && is_included(set, s[end_idx]))
		end_idx--;
	p = ft_substr(s, start_idx, end_idx - start_idx + 1);
	if (p == NULL)
		return (NULL);
	return (p);
}

static int	is_included(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}
