/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 12:09:46 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/16 19:01:21 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if ((9 <= c && c <= 13) || c == 32)
		return (1);
	return (0);
}

static int	check_overflow(long n, int m)
{
	if (n < 0)
	{
		if ((LONG_MIN / 10) < n)
			return (0);
		if (m < (LONG_MIN % 10))
			return (-1);
	}
	else
	{
		if (n < (LONG_MAX / 10))
			return (0);
		if ((LONG_MAX % 10) < m)
			return (1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int		sign;
	int		overflow_flag;
	long	n;

	n = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		overflow_flag = check_overflow(n, sign * (*str - '0'));
		if (overflow_flag == 1)
			return ((int)LONG_MAX);
		else if (overflow_flag == -1)
			return ((int)LONG_MIN);
		n = n * 10 + sign * (*str - '0');
		str++;
	}
	return ((int)n);
}

/*
int	main(void)
{
	// Paramters
	char s1[] = " \n \t \v \f \r  -5 6+145  ";
	char s2[] = " -+234+34";
	char s3[] = "  a 342414";
	char s4[] = "  -1234567abc34\t";
	char s5[] = "2147483647";
	char s6[] = "-2147483648";
	char s7[] = " 99999999999";
	char s8[] = "-99999999999";
	char s9[] = " 999999999999999999999999";
	char s10[] = "-999999999999999999999999";

	printf("---------- atoi ---------\n");
	printf("atoi(\"%s\") = %d\n", s1, atoi(s1));
	printf("atoi(\"%s\") = %d\n", s2, atoi(s2));
	printf("atoi(\"%s\") = %d\n", s3, atoi(s3));
	printf("atoi(\"%s\") = %d\n", s4, atoi(s4));
	printf("atoi(\"%s\") = %d\n", s5, atoi(s5));
	printf("atoi(\"%s\") = %d\n", s6, atoi(s6));
	printf("atoi(\"%s\") = %d\n", s7, atoi(s7));
	printf("atoi(\"%s\") = %d\n", s8, atoi(s8));
	printf("atoi(\"%s\") = %d\n", s9, atoi(s9));
	printf("atoi(\"%s\") = %d\n", s10, atoi(s10));

	printf("---------- ft_atoi ---------\n");
	printf("ft_atoi(\"%s\") = %d\n", s1, ft_atoi(s1));
	printf("ft_atoi(\"%s\") = %d\n", s2, ft_atoi(s2));
	printf("ft_atoi(\"%s\") = %d\n", s3, ft_atoi(s3));
	printf("ft_atoi(\"%s\") = %d\n", s4, ft_atoi(s4));
	printf("ft_atoi(\"%s\") = %d\n", s5, ft_atoi(s5));
	printf("ft_atoi(\"%s\") = %d\n", s6, ft_atoi(s6));
	printf("ft_atoi(\"%s\") = %d\n", s7, ft_atoi(s7));
	printf("ft_atoi(\"%s\") = %d\n", s8, ft_atoi(s8));
	printf("ft_atoi(\"%s\") = %d\n", s9, ft_atoi(s9));
	printf("ft_atoi(\"%s\") = %d\n", s10, ft_atoi(s10));

	return (0);
}
*/
