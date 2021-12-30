/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 18:06:40 by ttomori           #+#    #+#             */
/*   Updated: 2021/12/30 18:22:44 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	// Parameters
	char s1[] = "Hey!!";
	char s2[] = "wwwwwwwww";

	printf("---------- strcpy ----------\n");
	char s3[20] = "Hi!!";
	printf("Before: %s\n", s3);
	strcpy(s3, s1);
	printf("After1: %s\n", s3);
	strcpy(s3, s2);
	printf("After2: %s\n", s3);
	
	printf("---------- ft_strcpy ----------\n");
	char s4[20] = "Hi!!";
	printf("Before: %s\n", s4);
	ft_strcpy(s4, s1);
	printf("After1: %s\n", s4);
	ft_strcpy(s4, s2);
	printf("After2: %s\n", s4);
	return (0);
}
*/
