/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaksimo <mmaksimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:50:02 by mmaksimo          #+#    #+#             */
/*   Updated: 2024/02/01 23:05:34 by mmaksimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	char	*str0;

	str0 = str;
	while (*str)
		str++;
	return (str - str0);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (&dest[0]);
}

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*dest;

	src_len = ft_strlen(src);
	dest = malloc(sizeof(char) * (src_len + 1));
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}
void	pop_arr(char **split_arr, char *str_copy, int len)
{
	int i = 0;
	int j = 0;
	int is_sep = 1;
	int sub_len = 0;
	while (i < len)
	{
		if (str_copy[i] == '\0' && !is_sep)
		{
			split_arr[j] = ft_strdup(&str_copy[i - sub_len]);
			is_sep = 1;
			sub_len = 0;
			j++;
		}
		else if (str_copy[i] == '\0' && is_sep)
			sub_len = 0;
		else
		{
			sub_len++;
			is_sep = 0;
		}
		i++;
	}
	split_arr[j] = 0;
}

char **ft_split(char *str, char *charset)
{
	char **split_arr;
	char *str_copy;
	int i;
	int j;
	int len;

	len = ft_strlen(str);
	split_arr = (char**) malloc(sizeof(char*) * (len + 1));
	str_copy = ft_strdup(str);
	if (split_arr == NULL || str_copy == NULL || *charset == '\0')
		return (NULL);
	i = 0;
	while (i < len)
	{
		j = 0;
		while (charset[j])
		{
			if (str_copy[i] == charset[j])
				str_copy[i] = '\0';
			j++;
		}
		i++;
	}
	pop_arr(split_arr, str_copy, len);
	return (split_arr);
}

// #include <stdio.h>

// int main(void)
// {
// 	char *str = "    This is    a test,  string;separated by different, characters;";
// 	char *charset = ",; ";
// 	char **splitted;

// 	splitted = ft_split(str, charset);

// 	int i = 0;
// 	while (splitted[i] != NULL)
// 	{
// 		printf("%s\n", splitted[i]);
// 		free(splitted[i]);
// 		i++;
// 	}
// 	free(splitted);
//	free(str_copy);
// 	return (0);
// }
