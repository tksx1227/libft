/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 00:28:58 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/09 00:56:44 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*p;
	char	*head;
	size_t	total_len;

	total_len = ft_strlen(s1) + ft_strlen(s2);
	p = (char *)malloc(sizeof(char) * (total_len + 1));
	if (p == NULL)
		return (NULL);
	head = p;
	i = 0;
	while (s1[i] != '\0')
		*p++ = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		*p++ = s2[i++];
	*p = '\0';
	return (head);
}

/*
int	main(void)
{
	// Parameters
	char s1[] = "Hello";
	char s2[] = " World!!";
	char s3[] = "";

	char *res1 = ft_strjoin(s1, s2);
	printf("ft_strjoin(\"%s\", \"%s\") = \"%s\"\n", s1, s2, res1);
	free(res1);

	char *res2 = ft_strjoin(s1, s3);
	printf("ft_strjoin(\"%s\", \"%s\") = \"%s\"\n", s1, s3, res2);
	free(res2);
	return (0);
}
*/
