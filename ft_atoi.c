/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 12:09:46 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/08 12:52:42 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if ((9 <= c && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		num;
	int		minus_flag;
	char	*p;

	num = 0;
	minus_flag = 1;
	p = (char *)str;
	while (ft_isspace(*p))
		p++;
	if (*p == '+' || *p == '-')
	{
		if (*p == '-')
			minus_flag *= -1;
		p++;
	}
	while (ft_isdigit(*p))
	{
		num *= 10;
		num += (*p - '0');
		p++;
	}
	return (minus_flag * num);
}

/*
int	main(void)
{
	// Paramters
	char s1[] = " \n \t \v \f \r  -5 6+145  ";
	char s2[] = " -+234+34";
	char s3[] = "  a 342414";
	char s4[] = "  -1234567abc34\t";

	printf("---------- atoi ---------\n");
	printf("atoi(\"%s\") = %d\n", s1, atoi(s1));
	printf("atoi(\"%s\") = %d\n", s2, atoi(s2));
	printf("atoi(\"%s\") = %d\n", s3, atoi(s3));
	printf("atoi(\"%s\") = %d\n", s4, atoi(s4));

	printf("---------- ft_atoi ---------\n");
	printf("ft_atoi(\"%s\") = %d\n", s1, ft_atoi(s1));
	printf("ft_atoi(\"%s\") = %d\n", s2, ft_atoi(s2));
	printf("ft_atoi(\"%s\") = %d\n", s3, ft_atoi(s3));
	printf("ft_atoi(\"%s\") = %d\n", s4, ft_atoi(s4));
	return (0);
}
*/
