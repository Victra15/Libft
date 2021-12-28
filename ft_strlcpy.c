/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolee <yolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 22:45:44 by yolee             #+#    #+#             */
/*   Updated: 2021/12/27 15:31:34 by yolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	idx;

	idx = 0;
	while (idx < dstsize)
	{
		if (idx == dstsize - 1)
			dst[idx] = '\0';
		else
			dst[idx] = src[idx];
		idx++;
	}
	return (ft_strlen(src));
}
