/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolee <yolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:39:30 by yolee             #+#    #+#             */
/*   Updated: 2021/12/16 17:09:20 by yolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				loop;
	unsigned char		*conv_dst;
	const unsigned char	*conv_src;

	conv_dst = dst;
	conv_src = src;
	loop = 0;
	while (loop < n)
	{
		*(conv_dst + loop) = *(conv_src + loop);
		loop++;
	}
	return (dst);
}
