/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolee <yolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 22:45:44 by yolee             #+#    #+#             */
/*   Updated: 2021/09/15 22:45:44 by yolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	idx;
	unsigned int	length;

	idx = 0;
	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	while (idx < size)
	{
		if (idx == size - 1)
		{
			dest[idx] = '\0';
		}
		else
		{
			dest[idx] = src[idx];
		}
		idx++;
	}
	return (length);
}
