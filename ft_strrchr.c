/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolee <yolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:40:19 by yolee             #+#    #+#             */
/*   Updated: 2021/12/28 14:57:56 by yolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	idx;
	size_t	len;

	len = ft_strlen(s);
	s += len;
	idx = 0;
	while (idx <= len)
	{
		if (*s == c)
			return ((char *)(s));
		s--;
		idx++;
	}
	return (0);
}
