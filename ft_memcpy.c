/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolee <yolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:39:30 by yolee             #+#    #+#             */
/*   Updated: 2021/11/26 20:14:18 by yolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int				loop;
	unsigned char	*conv_dst;
	unsigned char	*conv_src;

	loop = 0;
	while (loop < n)
	{
		*(conv_dst + loop) = *(conv_src + loop);
		loop++;
	}
	return (dst);
}
