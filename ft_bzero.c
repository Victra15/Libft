/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolee <yolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:38:55 by yolee             #+#    #+#             */
/*   Updated: 2021/11/26 20:07:16 by yolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int				loop;
	unsigned char	*conv_s;

	conv_s = (unsigned char *)s;
	loop = 0;
	while (loop < n)
	{
		*(conv_s + loop) = 0;
		loop++;
	}
}
