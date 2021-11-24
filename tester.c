/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolee <yolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:59:49 by yolee             #+#    #+#             */
/*   Updated: 2021/11/24 18:45:20 by yolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdio.h>
#include	<ctype.h>

int	main(void)
{
	int	boo;

	boo = isascii(127);
	printf("%d", boo);
	boo = isascii(128);
	printf("%d", boo);
	return (0);
}
