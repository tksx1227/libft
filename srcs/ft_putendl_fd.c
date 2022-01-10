/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 23:01:11 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/03 23:03:19 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*
int	main(void)
{
	// Paramters
	char s[] = "Hello World!!";
	int fd = 1;

	printf("s = %s\n", s);
	printf("fd = %d\n", fd);
	ft_putendl_fd(s, fd);
	return (0);
}
*/
