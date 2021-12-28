/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolee <yolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 01:50:55 by yolee             #+#    #+#             */
/*   Updated: 2021/12/28 03:41:56 by yolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdlib.h>

static int	is_sep(char chr, char *charset)
{
	int	charset_loop;

	charset_loop = 0;
	while (charset[charset_loop] != '\0')
	{
		if (chr == charset[charset_loop])
			return (1);
		charset_loop++;
	}
	return (0);
}

static char	*ft_strndup(char *src, int size)
{
	char	*src_cp;
	int		idx;

	src_cp = malloc(size + 1);
	if (src_cp == 0)
		return (0);
	else
	{
		idx = 0;
		while (src[idx] != '\0' && idx < size)
		{
			src_cp[idx] = src[idx];
			idx++;
		}
		src_cp[idx] = '\0';
		return (src_cp);
	}
}

static void	do_sep(char **splited_strs, char *str, char *charset)
{
	int		sep_loop;
	int		str_loop;
	int		start;
	int		size;

	sep_loop = 0;
	str_loop = 0;
	start = 0;
	while (str[str_loop] != '\0')
	{
		if (is_sep(str[str_loop], charset))
		{
			size = str_loop - start;
			if (size != 0)
			{
				splited_strs[sep_loop] = ft_strndup(&str[start], size);
				sep_loop++;
			}
			start = str_loop + 1;
		}
		str_loop++;
	}
	size = str_loop - start;
	if (str_loop - start != 0)
		splited_strs[sep_loop] = ft_strndup(&str[start], size);
}

static char	**sep_str(char *str, char *charset, int sep_cnt)
{
	char	**splited_strs;

	splited_strs = (char **) malloc(sizeof(char *) * (sep_cnt + 1));
	do_sep(splited_strs, str, charset);
	splited_strs[sep_cnt] = 0;
	return (splited_strs);
}

char	**ft_split(char const *str, char *charset)
{
	int		sep_cnt;
	char	**splited_strs;
	int		str_loop;
	int		start;
	int		size;

	str_loop = 0;
	sep_cnt = 0;
	start = 0;
	while (str[str_loop] != '\0')
	{
		if (is_sep(str[str_loop], charset))
		{
			size = str_loop - start;
			if (size != 0)
				sep_cnt++;
			start = str_loop + 1;
		}
		str_loop++;
	}
	size = str_loop - start;
	if (str_loop - start != 0)
		sep_cnt++;
	splited_strs = sep_str(str, charset, sep_cnt);
	return (splited_strs);
}
