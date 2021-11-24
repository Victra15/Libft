/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolee <yolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:36:45 by yolee             #+#    #+#             */
/*   Updated: 2021/11/24 17:40:29 by yolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	loop;

	dest_size = 0;
	while (dest[dest_size] != '\0')
		dest_size++;
	src_size = 0;
	while (src[src_size] != '\0')
		src_size++;
	loop = 0;
	if (dest_size >= size)
		return (size + src_size);
	while (dest_size + loop < size - 1)
	{
		if (loop < src_size)
			dest[dest_size + loop] = src[loop];
		else
			break ;
		loop++;
	}
	dest[dest_size + loop] = '\0';
	return (dest_size + src_size);
}
