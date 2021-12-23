/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolee <yolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:39:32 by yolee             #+#    #+#             */
/*   Updated: 2021/12/23 17:31:33 by yolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*conv_dst;
	const unsigned char	*conv_src;

	if (dst < src)
	{
		conv_dst = dst;
		conv_src = src;
		while (len--)
			*(conv_dst++) = *(conv_src++);
	}
	else
	{
		conv_dst = dst + len - 1;
		conv_src = src + len - 1;
		while (len--)
			*(conv_dst--) = *(conv_src--);
	}
	return (dst);
}
