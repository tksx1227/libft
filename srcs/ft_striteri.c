/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 01:25:55 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/20 00:14:21 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(size_t, char *))
{
	size_t	i;

	if (f == NULL || s == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
