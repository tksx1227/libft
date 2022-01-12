/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:55:15 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/12 17:29:27 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	reverse_str(char *s)
{
	char	temp;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	while (i < len / 2)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i++;
	}
}

static void	convert_recursive(char *s, long long int n)
{
	if (n == 0)
	{
		*s = '\0';
		return ;
	}
	convert_recursive(s + 1, n / 10);
	*s = (n % 10) + '0';
}

size_t	count_digit(long long int n)
{
	size_t	counter;

	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		counter = 1;
	}
	else
		counter = 0;
	while (n != 0)
	{
		counter++;
		n /= 10;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char			*p;
	char			*head;
	long long int	nbr;

	nbr = (long long int)n;
	p = (char *)malloc(sizeof(char) * (count_digit(nbr) + 1));
	if (p == NULL)
		return (NULL);
	head = p;
	if (nbr < 0)
	{
		*p++ = '-';
		nbr *= -1;
	}
	else if (nbr == 0)
	{
		*p++ = '0';
	}
	convert_recursive(p, nbr);
	reverse_str(p);
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
	int n2 = 42;
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
