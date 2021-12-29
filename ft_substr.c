/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolee <yolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 16:31:22 by yolee             #+#    #+#             */
/*   Updated: 2021/12/29 17:11:40 by yolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s_sub;
	size_t	s_sub_len;

	s_sub_len = ft_strlen(&s[start]);
	if (s_sub_len > len)
		s_sub = (char *)malloc(len + 1);
	else
		s_sub = (char *)malloc(s_sub_len + 1);
	if (s_sub == 0)
		return (0);
	if (s_sub_len > len)
		ft_strlcpy(s_sub, &s[start], len + 1);
	else
		ft_strlcpy(s_sub, &s[start], s_sub_len + 1);
	return (s_sub);
}
