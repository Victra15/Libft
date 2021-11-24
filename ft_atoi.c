/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolee <yolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 22:40:59 by yolee             #+#    #+#             */
/*   Updated: 2021/11/24 17:40:29 by yolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_num(char chr)
{
	if (chr >= '0' && chr <= '9')
		return (1);
	else
		return (0);
}

int	ft_is_space(char chr)
{
	if (chr == '\t'
		|| chr == '\n'
		|| chr == '\v'
		|| chr == '\f'
		|| chr == '\r'
		|| chr == ' ')
		return (1);
	else
		return (0);
}

int	ft_is_sign(char chr)
{
	if (chr == '+' || chr == '-')
		return (1);
	else
		return (0);
}

int	ft_is_valid(char chr, int *nb_ptr, int *minus_cnt_ptr, int *flag_ptr)
{
	if (ft_is_num(chr))
	{
		if (*flag_ptr != 2)
			*flag_ptr = 2;
		(*nb_ptr) = ((*nb_ptr) * 10) + chr - '0';
	}
	else if (ft_is_sign(chr))
	{
		if (*flag_ptr == 2)
			return (0);
		else
			*flag_ptr = 1;
		if (chr == '-')
			(*minus_cnt_ptr)++;
	}
	else if (ft_is_space(chr))
	{
		if (*flag_ptr == 1 || *flag_ptr == 2)
			return (0);
	}
	else
	{
		return (0);
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	minus_cnt;
	int	nb;
	int	loop;
	int	flag;

	minus_cnt = 0;
	nb = 0;
	loop = 0;
	flag = 0;
	while (str[loop] != '\0')
	{
		if (!ft_is_valid(str[loop], &nb, &minus_cnt, &flag))
			break ;
		loop++;
	}
	if (minus_cnt % 2 == 1)
		return (-nb);
	else
		return (nb);
}
