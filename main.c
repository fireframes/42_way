/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaksimo <mmaksimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:53:29 by mmaksimo          #+#    #+#             */
/*   Updated: 2024/02/23 21:29:38 by mmaksimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <ctype.h>
#include <mcheck.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
	const char *s1 = "This is 42 forever alse is going well";
	// const char *s2 = "";

	char *trimmed = ft_strtrim("tripouillerrtt", "riit");

	printf("%s\n", trimmed);

}
