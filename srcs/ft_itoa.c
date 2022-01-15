/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:55:15 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/16 02:12:41 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static void	convert_recursive(char *s, long long int n)
{
	if (n == 0)
		return ;
	convert_recursive(s - 1, n / 10);
	*s = (n % 10) + '0';
}

int	count_digit(long long int n)
{
	int	counter;

	counter = 0;
	if (n <= 0)
	{
		n = -n;
		counter++;
	}
	while (n != 0)
	{
		counter++;
		n /= 10;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	int				digit;
	char			*p;
	char			*head;
	long long int	nbr;

	nbr = (long long int)n;
	digit = count_digit(nbr);
	p = (char *)malloc(sizeof(char) * (digit + 1));
	if (p == NULL)
		return (NULL);
	head = p;
	p[digit] = '\0';
	if (nbr < 0)
	{
		*p++ = '-';
		nbr *= -1;
	}
	else if (nbr == 0)
	{
		*p++ = '0';
	}
	convert_recursive(head + digit - 1, nbr);
	return (head);
}

/*
void	print_test(int n)
{
	char *res = ft_itoa(n);
	printf("Integer: %d, String: \"%s\"\n", n, res);
	free(res);
}

int	main(void)
{
	// Parameters
	int n1 = 0;
	int n2 = -42;
	int n3 = 2147483647;
	int n4 = -2147483648;
	int n5 = 12345;

	print_test(n1);
	print_test(n2);
	print_test(n3);
	print_test(n4);
	print_test(n5);

	return (0);
}
*/
