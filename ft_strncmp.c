/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolee <yolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:09:46 by yolee             #+#    #+#             */
/*   Updated: 2021/12/27 15:34:54 by yolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	loop;

	loop = 0;
	while ((s1[loop] != '\0' || s2[loop] != '\0') && loop < n)
	{
		if (s1[loop] != s2[loop])
			return (s1[loop] - s2[loop]);
		loop++;
	}
	return (0);
}
