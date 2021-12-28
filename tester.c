/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolee <yolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:59:49 by yolee             #+#    #+#             */
/*   Updated: 2021/12/28 13:41:22 by yolee            ###   ########.fr       */
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
		printf("%lu\n", strlen("123456789"));
		printf("%lu\n", ft_strlen("123456789"));
	}
	else if (selector == 6)
	{	
		char	str1[10] = "123456789";
		char	str2[10] = "123456789";

		memset(str1 + 5, 14567, 4);
		ft_memset(str2 + 5, 14567, 4);
		printf("%s\n", str1);
		printf("%s\n", str2);
	}
	else if (selector == 7)
	{	
		char	str1[10] = "123456789";
		char	str2[10] = "123456789";

		bzero(str1 + 5, 5);
		ft_bzero(str2 + 5, 5);
		printf("%s\n", str1);
		printf("%s\n", str2);
	}
	else if (selector == 8)
	{	
		char	str1[15] = "1234567890";
		char	str2[15] = "1234567890";

		memcpy(str1 + 2, str1, 10);
		printf("%s\n", str1);
		ft_memcpy(str2 + 2, str2, 10);
		printf("%s\n", str2);
	}
	else if (selector == 9)
	{	
		char	str1[15] = "1234567890";
		char	str2[15] = "1234567890";

		memmove(str1 + 2, str1, 10);
		printf("%s\n", str1);
		ft_memmove(str2 + 2, str2, 10);
		printf("%s\n", str2);
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
		char	str1[10] = "123456789";
		char	*str2;
		char	str3[10] = "123456789";
		char	*str4;
	
		str2 = strchr(str1, '\0');
		printf("%s-\n", str2);
		str4 = ft_strchr(str3, '\0');
		printf("%s-\n", str4);
	}
	else if (selector == 15)
	{	
		char	str1[10] = "123456383";
		char	chr1 = '1';
		char	*target1;
		char	str2[10] = "123456383";
		char	chr2 = '1';
		char	*target2;
	
		target1 = strrchr(str1, chr1);
		printf("library\n");
		printf("%s\n", target1);
		printf("libft\n");
		target2 = ft_strrchr(str2, chr2);
		printf("%s\n", target2);
		return (0);	
	}
	else if (selector == 16)
	{
		char	str1[10] = "123456789";
		char	*str2;
		char	str3[10] = "123456789";
		char	*str4;
	
		str2 = memchr(str1, '5', 10);
		printf("%s", str2);
		str4 = ft_memchr(str3, '5', 10);
		printf("%s", str4);
	}
	else if (selector == 17)
	{	
		char	str1[15] = "1234567890";
		char	str2[15] = "1234567891";
		int		result1;
		int		result2;
	
		result1 = memcmp(str1, str2, 10);
		printf("%d ", result1);
		result2 = ft_memcmp(str1, str2, 10);
		printf("%d", result2);
	}
	else if (selector == 18)
	{	
	}
	else if (selector == 19)
	{	
		char	str1[10] = "123456789";
		char	*str2 = "";
		char	*target1;
		char	str3[10] = "123456789";
		char	*str4 = "";
		char	*target2;
	
		target1 = strnstr(str1, str2, 9);
		printf("library\n");
		printf("%s\n", target1);
		printf("%ld\n", strlen(str2));
		target2 = strnstr(str3, str4, 9);
		printf("libft\n");
		printf("%s\n", target2);
		printf("%ld\n", strlen(str4));
		return (0);	
	}
	else if (selector == 20)
	{	
		printf("%d\n", atoi("00000000000922337203775808000000"));
		printf("%d", ft_atoi("00000000000922337203775808000000"));
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
