/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolee <yolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:39:22 by yolee             #+#    #+#             */
/*   Updated: 2021/12/23 17:11:34 by yolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*conv_s1;
	const unsigned char	*conv_s2;

	conv_s1 = s1;
	conv_s2 = s2;
	while (--n && *(conv_s1) == *(conv_s2))
	{
		conv_s1++;
		conv_s2++;
	}
	return (*conv_s1 - *conv_s2);
}
