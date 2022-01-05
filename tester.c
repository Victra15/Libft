/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolee <yolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:59:49 by yolee             #+#    #+#             */
/*   Updated: 2022/01/06 03:41:09 by yolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdio.h>
#include	<stdlib.h>
#include	<ctype.h>

char	test_tolower(unsigned int idx, char c)
{
	if (idx % 2 == 1)
		return (c);
	if (c >= 'A' && c <= 'Z')
		return (c - ('A' - 'a'));
	else
		return (c);
}

int	main(void)
{
	int	selector;

	selector = 0;

	// ft_isalpha		0	// ft_isdigit		1	// ft_isalnum		2	// ft_isascii		3	
	// ft_isprint		4	// ft_strlen		5	// ft_memset		6	// ft_bzero			7
	// ft_memcpy		8	// ft_memmove		9	// ft_strlcpy		10	// ft_strlcat		11
	// ft_toupper		12	// ft_tolower		13	// ft_strchr		14	// ft_strrchr		15
	// ft_strncmp		16	// ft_memchr		17	// ft_memcmp		18	// ft_strnstr		19
	// ft_atoi			20	// ft_calloc		21	// ft_strdup		22	// ft_substr		23
	// ft_strjoin		24	// ft_strtrim		25	// ft_split			26	// ft_itoa			27
	// ft_strmapi		28	// ft_striteri		29	// ft_putchar_fd	30	// ft_putstr_fd		31
	// ft_putendl_fd	32	// ft_putnbr_fd		33	// ft_lstnew		34	// ft_lstadd_front	35
	// ft_lstsize		36	// ft_lstlast		37	// ft_lstadd_back	38	// ft_lstdelone		39
	// ft_lstclear		40	// ft_lstiter		41	// ft_lstmap		42
	
	if (selector == 0)
	{
		printf("ft_isalpha: %d\n", ft_isalpha('0'));
		printf("isalpha: %d\n", isalpha('0'));
	}
	else if (selector == 1)
	{
		printf("ft_isdigit%d\n", ft_isdigit('0'));
		printf("isdigit%d\n", isdigit('0'));
	}
	else if (selector == 2)
	{
		printf("ft_isalnum: %d\n", ft_isalnum('0'));
		printf("isalnum: %d\n", isalnum('0'));
	}
	else if (selector == 3)
	{
		printf("ft_isascii: %d\n", ft_isascii('0'));
		printf("isascii: %d\n", isascii('0'));
	}
	else if (selector == 4)
	{
		printf("ft_isprint: %d\n", ft_isprint('0'));
		printf("isprint: %d\n", isprint('0'));
	}
	else if (selector == 5)
	{
		printf("ft_strlen: %lu\n", ft_strlen("123456789"));
		printf("strlen: %lu\n", strlen("123456789"));
	}
	else if (selector == 6)
	{	
		char	str1[10] = "123456789";
		char	str2[10] = "123456789";

		ft_memset(str1 + 5, 14567, 4);
		memset(str2 + 5, 14567, 4);
		printf("ft_memset: %s\n", str1);
		printf("memset: %s\n", str2);
	}
	else if (selector == 7)
	{	
		char	str1[10] = "123456789";
		char	str2[10] = "123456789";

		ft_bzero(str1 + 5, 5);
		bzero(str2 + 5, 5);
		printf("ft_bzero: %s\n", str1);
		printf("bzero: %s\n", str2);
	}
	else if (selector == 8)
	{	
		char	str1[15] = "1234567890";
		char	str2[15] = "1234567890";

		ft_memcpy(str1 + 2, str1, 10);
		memcpy(str2 + 2, str2, 10);
		printf("ft_memcpy: %s\n", str1);
		printf("memcpy: %s\n", str2);
	}
	else if (selector == 9)
	{	
		char	str1[15] = "1234567890";
		char	str2[15] = "1234567890";

		ft_memmove(str1 + 2, str1, 10);
		memmove(str2 + 2, str2, 10);
		printf("ft_memmove: %s\n", str1);
		printf("memmove: %s\n", str2);
	}
	else if (selector == 10)
	{	
		char	str1[20] = "123456";
		char	cpy_str1[20];
		char	str2[20] = "123456";
		char	cpy_str2[20];
	
		printf("ft_strlcpy: %ld ", ft_strlcpy(cpy_str1, str1, 15));
		printf("%s\n", cpy_str1);
		printf("strlcpy: %ld ", strlcpy(cpy_str2, str2, 15));
		printf("%s\n", cpy_str2);
		
	}
	else if (selector == 11)
	{	
		char str1[20] = "123456";
		char cat_str1[20] = "123456";
		char str2[20] = "123456";
		char cat_str2[20] = "123456";

		printf("ft_strlcat: %ld\n", ft_strlcat(cat_str1, str1, 15));
		printf("%s\n", cat_str1);
		printf("strlcat: %ld\n", strlcat(cat_str2, str2, 15));
		printf("%s\n", cat_str2);
		
	}
	else if (selector == 12)
	{	
		int		ch1;
		int		ch2;
	
		ch1 = 2135;
		ch2 = 2135;
	
		printf("ft_toupper: %c\n", ft_toupper(ch1));
		printf("toupper: %c\n", toupper(ch2));
	}
	else if (selector == 13)
	{
		int		ch1;
		int		ch2;
		
		ch1 = 2135;
		ch2 = 2135;
	
		printf("ft_tolower: %c\n", ft_tolower(ch1));
		printf("tolower: %c\n", tolower(ch2));
	}
	else if (selector == 14)
	{	
		char	str1[10] = "123456789";
		char	str2[10] = "123456789";
	
		printf("ft_strchr: %s-\n", ft_strchr(str1, '\0'));
		printf("strchr: %s-\n", strchr(str2, '\0'));
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
		char str1[20] = "123456";
		char str2[20] = "12345a";

		printf("library\n");
		printf("%d\n", memcmp(str1, str2, 6));
		printf("libft\n");
		printf("%d\n", ft_memcmp(str1, str2, 6));
		
	}
	else if (selector == 19)
	{	
		char	str1[10] = "123456789";
		char	*str2 = "57";
		char	*target1;
		char	str3[10] = "123456789";
		char	*str4 = "57";
		char	*target2;
	
		target1 = strnstr(str1, str2, 9);
		printf("library\n");
		printf("%s\n", target1);
		printf("%ld\n", strlen(str2));
		target2 = ft_strnstr(str3, str4, 9);
		printf("libft\n");
		printf("%s\n", target2);
		printf("%ld\n", strlen(str4));
		
	}
	else if (selector == 20)
	{	
		printf("%d\n", atoi("00000000000922337203775808000000"));
		printf("%d", ft_atoi("00000000000922337203775808000000"));
	}
	else if (selector == 21)
	{	
		char	*mem1;
		char	*mem2;
	
		printf("library\n");
		mem1 = calloc(5, sizeof(int));
		mem1[0] = 'a';
		mem1[1] = 'b';
		printf("%s\n", mem1);
		printf("libft\n");
		mem2 = ft_calloc(5, sizeof(int));
		mem2[0] = 'a';
		mem2[1] = 'b';
		printf("%s\n", mem2);
		
	}
	else if (selector == 22)
	{	
		char	str1[20] = "1234567";
		char	*dup_str1;
		char	str2[20] = "1234567";
		char	*dup_str2;
	
		printf("library\n");
		dup_str1 = strdup(str1);
		printf("%s\n", dup_str1);
		printf("libft\n");
		dup_str2 = ft_strdup(str2);
		printf("%s\n", dup_str2);
		
	}
	else if (selector == 23)
	{	
		char	str1[20] = "1234567";
		char	*sub_str1;
	
		printf("libft\n");
		sub_str1 = ft_substr(str1, 2, 3);
		printf("%s\n", sub_str1);
		
	}
	else if (selector == 24)
	{	
		char	str1[20] = "1234567";
		char	str2[20] = "1234567";
		char	*join_str;

		printf("libft\n");
		join_str = ft_strjoin(str1, str2);
		printf("%s\n", join_str);
		
	}
	else if (selector == 25)
	{	
		char	str1[20] = "123456aaaaa";
		char	str2[20] = "167a";
		char	*trim_str;
	
		printf("libft\n");
		trim_str = ft_strtrim(str1, str2);
		printf("%s\n", trim_str);
		
	}
	else if (selector == 26)
	{	
		char	str[20] = "a12a34a5a6a235a1a1";
		char	chr;
		char	**split_str;
		size_t	split_loop;
	
		chr = 'a';
		printf("libft\n");
		split_str = ft_split(str, chr);
		split_loop = 0;
		while (split_str[split_loop] != 0)
		{
			printf("%s\n", split_str[split_loop]);
			split_loop++;
		}
		
	}
	else if (selector == 27)
	{	
		char	*str;
		int		n;
	
		n = -2147483648;
		printf("libft\n");
		str = ft_itoa(n);
		printf("%s\n", str);
		
	}
	else if (selector == 28)
	{	
		char	*str1 = "assklwqklwklmcALWm";
		char	*str2;
	
		printf("libft\n");
		str2 = ft_strmapi(str1, test_tolower);
		printf("%s\n", str2);
		
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
	else if (selector == 41)
	{	
	}
	else
	{
		write(1, "wrong selector\n", 16);
	}
	return (0);
}
