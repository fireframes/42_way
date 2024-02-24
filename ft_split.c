/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaksimo <mmaksimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:50:02 by mmaksimo          #+#    #+#             */
/*   Updated: 2024/02/24 19:44:36 by mmaksimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	pop_arr(char **split, char *s_cpy, size_t len, size_t i)
{
	size_t	j;
	size_t	is_sep;
	size_t	sub_len;

	j = 0;
	is_sep = 1;
	sub_len = 0;
	while (i < len + 1)
	{
		if (s_cpy[i] == '\0' && !is_sep)
		{
			split[j++] = ft_strdup((const char *) &s_cpy[i - sub_len]);
			is_sep = 1;
			sub_len = 0;
		}
		else if (s_cpy[i] == '\0' && is_sep)
			sub_len = 0;
		else
		{
			sub_len++;
			is_sep = 0;
		}
		i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	char	*s_cpy;
	size_t	i;
	size_t	len;
	size_t	final_len;

	len = ft_strlen(s);
	split = (char **) malloc(sizeof(char *) * (len + 1));
	s_cpy = ft_strdup(s);
	if (split == NULL || s_cpy == NULL || c == '\0')
		return (NULL);
	i = 0;
	while (i < len)
	{
		if (s_cpy[i] == c)
			s_cpy[i] = '\0';
		i++;
	}
	final_len = pop_arr(split, s_cpy, len, 0);
	while (final_len < len)
		free(split[final_len++]);
	return (split);
}
