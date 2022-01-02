/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolee <yolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 17:12:26 by yolee             #+#    #+#             */
/*   Updated: 2022/01/03 00:40:38 by yolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_size;
	size_t	s2_size;
	char	*join_s;

	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	join_s = (char *)malloc(s1_size + s2_size + 1);
	if (join_s == 0)
		return (0);
	join_s[0] = '\0';
	ft_strlcat(join_s, s1, s1_size + 1);
	ft_strlcat(join_s, s2, s1_size + s2_size + 1);
	return (join_s);
}
