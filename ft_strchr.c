/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolee <yolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:39:45 by yolee             #+#    #+#             */
/*   Updated: 2021/12/23 18:23:29 by yolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	conv_c;

	conv_c = (char) c;
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)(s));
		s++;
	}
	if (c == '\0')
		return ((char *)(s));
	else
		return (0);
}
