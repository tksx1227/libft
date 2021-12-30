/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 18:38:21 by ttomori           #+#    #+#             */
/*   Updated: 2021/12/30 18:45:38 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char	*p;

	p = dest;
	while (*p != '\0')
		p++;
	while (*src != '\0')
		*p++ = *src++;
	*p = '\0';
	return (dest);
}

/*
int	main(void)
{
	// Parameters
	char s1[] = " WOW WOW";

	printf("---------- strcat ----------\n");
	char s2[20] = "Hi!!!";
	printf("\"%s\" + \"%s\" = ", s2, s1);
	strcat(s2, s1);
	printf("\"%s\"\n", s2);
	
	printf("---------- ft_strcat ----------\n");
	char s3[20] = "Hi!!!";
	printf("\"%s\" + \"%s\" = ", s3, s1);
	ft_strcat(s3, s1);
	printf("\"%s\"\n", s3);
	return (0);
}
*/
