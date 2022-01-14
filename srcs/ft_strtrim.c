/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 00:59:49 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/14 16:34:15 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_included(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	size_t	len;
	char	*p;

	len = ft_strlen(s);
	if (len < n)
		n = len;
	p = (char *)malloc(sizeof(char) * (n + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	*ft_strtrim(char const *s, char const *set)
{
	int		start_idx;
	int		end_idx;
	size_t	len;
	char	*p;

	if (s == NULL || set == NULL)
		return (NULL);
	len = ft_strlen(s);
	start_idx = 0;
	while (is_included(set, s[start_idx]))
		start_idx++;
	end_idx = len - 1;
	while (start_idx < end_idx && is_included(set, s[end_idx]))
		end_idx--;
	p = ft_strndup(s + start_idx, end_idx - start_idx + 1);
	if (p == NULL)
		return (NULL);
	return (p);
}

/*
int	main(void)
{
	// Parameters
	char s1[] = "wow wowHello World!!wow";
	char s2[] = "aaaaaab";
	char set1[] = "ow!?a";
	char set2[] = "e lo";
	char set3[] = "! owlHeWdr";
	char set4[] = "";

	char *res1 = ft_strtrim(s1, set1);
	printf("ft_strtrim(\"%s\", \"%s\") = \"%s\"\n", s1, set1, res1);
	free(res1);

	char *res2 = ft_strtrim(s1, set2);
	printf("ft_strtrim(\"%s\", \"%s\") = \"%s\"\n", s1, set2, res2);
	free(res2);

	char *res3 = ft_strtrim(s1, set3);
	printf("ft_strtrim(\"%s\", \"%s\") = \"%s\"\n", s1, set3, res3);
	free(res3);

	char *res4 = ft_strtrim(s2, set1);
	printf("ft_strtrim(\"%s\", \"%s\") = \"%s\"\n", s2, set1, res4);
	free(res4);

	char *res5 = ft_strtrim(s2, set4);
	printf("ft_strtrim(\"%s\", \"%s\") = \"%s\"\n", s2, set4, res5);
	free(res5);

	return (0);
}
*/
