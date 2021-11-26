/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolee <yolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:39:34 by yolee             #+#    #+#             */
/*   Updated: 2021/11/26 16:24:53 by yolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				loop;
	unsigned char	conv_c;
	unsigned char	*conv_b;

	conv_c = (unsigned char) c;
	conv_b = (unsigned char *) b;
	loop = 0;
	while (loop < len)
	{
		*(conv_b + loop) = conv_c;
		loop++;
	}
	return (b);
}
