/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 22:53:41 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/16 11:33:22 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int		len;
	char	*p;

	if (s == NULL)
		return ;
	len = 0;
	p = (char *)s;
	while (1)
	{
		if (p[len] == '\0' || len == INT_MAX)
		{
			write(fd, p, len);
			if (p[len] == '\0')
				break ;
			p += len;
			len = 0;
			continue ;
		}
		len++;
	}
}

/*
int	main(void)
{
	// Paramters
	char s[] = "Hello World!!";
	int fd = 1;

	printf("s = %s\n", s);
	printf("fd = %d\n", fd);
	ft_putstr_fd(s, fd);
	printf("\n");
	return (0);
}
*/
