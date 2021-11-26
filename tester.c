/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolee <yolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:59:49 by yolee             #+#    #+#             */
/*   Updated: 2021/11/26 17:21:58 by yolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdio.h>
#include	<stdlib.h>
#include	<ctype.h>

int	main(void)
{
	int	selector;

	selector = 0;

	// ft_isalpha		0	// ft_isdigit		1	// ft_isalnum		2	// ft_isascii		3	
	// ft_isprint		4	// ft_strlen		5	// ft_memset		6	// ft_bzero			7
	// ft_memcpy		8	// ft_memmove		9	// ft_strlcpy		10	// ft_strlcat		11
	// ft_toupper		12	// ft_tolower		13	// ft_strchr		14	// ft_strrchr		15
	// ft_strncmp		16	// ft_memchr		17	// ft_memcmp		18	// ft_strnstr		19
	// ft_atoi			20	// ft_substr		21	// ft_strtrim		22	// ft_split			23
	// ft_itoa			24	// ft_strmapi		25	// ft_striteri		26	// ft_putchar_fd	27
	// ft_putstr_fd		28	// ft_putendl_fd	29	// ft_putnbr_fd		30	// ft_lstnew		31
	// ft_lstadd_front	32	// ft_lstsize		33	// ft_lstlast		34	// ft_lstadd_back	35
	// ft_lstdelone		36	// ft_lstclear		37	// ft_lstiter		39	// ft_lstmap		40

	if (selector == 0)
	{
		ft_isalpha('0');
		isalpha('0');
	}
	else if (selector == 1)
	{
		ft_isdigit('0');
		isdigit('0');
	}
	else if (selector == 2)
	{
		ft_isalnum('0');
		isalnum('0');
	}
	else if (selector == 3)
	{
		ft_isascii('0');
		isascii('0');
	}
	else if (selector == 4)
	{
		ft_isprint('0');
		isprint('0');
	}
	else if (selector == 5)
	{
		ft_isalpha('0');
		isalpha('0');
	}
	else if (selector == 6)
	{	
	}
	else if (selector == 7)
	{	
	}
	else if (selector == 8)
	{	
	}
	else if (selector == 9)
	{	
	}
	else if (selector == 10)
	{	
	}
	else if (selector == 11)
	{	
	}
	else if (selector == 12)
	{	
	}
	else if (selector == 13)
	{	
	}
	else if (selector == 14)
	{	
	}
	else if (selector == 15)
	{	
	}
	else if (selector == 16)
	{	
	}
	else if (selector == 17)
	{	
	}
	else if (selector == 18)
	{	
	}
	else if (selector == 19)
	{	
	}
	else if (selector == 20)
	{	
	}
	else if (selector == 21)
	{	
	}
	else if (selector == 22)
	{	
	}
	else if (selector == 23)
	{	
	}
	else if (selector == 24)
	{	
	}
	else if (selector == 25)
	{	
	}
	else if (selector == 26)
	{	
	}
	else if (selector == 27)
	{	
	}
	else if (selector == 28)
	{	
	}
	else if (selector == 29)
	{	
	}
	else if (selector == 30)
	{	
	}
	else if (selector == 31)
	{	
	}
	else if (selector == 32)
	{	
	}
	else if (selector == 33)
	{	
	}
	else if (selector == 34)
	{	
	}
	else if (selector == 35)
	{	
	}
	else if (selector == 36)
	{	
	}
	else if (selector == 37)
	{	
	}
	else if (selector == 38)
	{	
	}
	else if (selector == 39)
	{	
	}
	else if (selector == 40)
	{	
	}
	else
	{
		write(1, "wrong selector\n", 16);
	}
	return (0);
}
