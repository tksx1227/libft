/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 12:09:46 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/20 00:02:07 by ttomori          ###   ########.fr       */
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
		if (n < (LONG_MIN / 10))
			return (-1);
		if ((LONG_MIN / 10) == n && m < (LONG_MIN % 10))
			return (-1);
	}
	else
	{
		if ((LONG_MAX / 10) < n)
			return (1);
		if ((LONG_MAX / 10) == n && (LONG_MAX % 10) < m)
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
