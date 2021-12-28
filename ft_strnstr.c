/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolee <yolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:40:16 by yolee             #+#    #+#             */
/*   Updated: 2021/12/28 13:21:02 by yolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_skip(const char haystack_chr,
	 const char *needle,
	 size_t needle_idx,
	 size_t *haystack_idx)
{
	size_t	skip;

	skip = 0;
	while (haystack_chr != needle[needle_idx - skip]
		&& needle_idx - skip > 0)
		skip++;
	(*haystack_idx) += skip;
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	haystack_len;
	size_t	needle_len;
	size_t	haystack_idx;
	size_t	needle_idx;
	char	skip_char;

	haystack_len = ft_strlen(haystack);
	needle_len = ft_strlen(needle);
	haystack_idx = 0;
	while ((haystack_idx + needle_len) < len
		&& (haystack_idx + needle_len) < haystack_len)
	{
		needle_idx = needle_len;
		while (needle_idx > 0
			&& haystack[haystack_idx + needle_idx] == needle[needle_idx])
			needle_idx--;
		if (needle_idx == 0)
			return ((char *)(&haystack[haystack_idx + needle_idx]));
		else
		{
			skip_char = haystack[haystack_idx + needle_idx];
			ft_skip(skip_char, needle, needle_idx, &haystack_idx);
		}
	}
	return (0);
}
