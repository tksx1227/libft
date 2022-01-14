/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 22:53:41 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/14 16:30:49 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	char	*p;

	if (s == NULL)
		return ;
	p = (char *)s;
	while (*p != '\0')
		write(fd, p++, 1);
}

/*
int	main(void)
{
	// Paramters
	char s[] = "Hello World!!\n";
	int fd = 1;

	printf("s = %s", s);
	printf("fd = %d\n", fd);
	ft_putstr_fd(s, fd);
	return (0);
}
*/
