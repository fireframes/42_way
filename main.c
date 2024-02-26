/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaksimo <mmaksimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:53:29 by mmaksimo          #+#    #+#             */
/*   Updated: 2024/02/26 12:32:18 by mmaksimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <bsd/string.h>
#include <ctype.h>
#include <mcheck.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

// void	test_f(unsigned int i, char *c)
// {
// 	if (i % 2 == 0)
// 		*c += 2;

// // 	else
// // 		*c += 1;
// }



// int main(void)
// {
// 	char s1[] = "This string says 42 forever! Everything else is going well!";
// 	// // const char *s2 = "";
// 	ft_striteri(s1, test_f);

// 	printf("%s\n", s1);
// 	// printf("%s\n", mapped);

// 	// printf("len_old %zu\n", ft_strlen(s1));
// 	// printf("len_new %zu\n", ft_strlen(mapped));
// 	// free(mapped);
// 	return (0);
// }

// int main(void)
// {
// 	// char *str = "    This is  a test,  string; separated by different, characters;";
// 	// char c = ' ';
// 	char **split;

// 	split = ft_split("--1-2--3---4----5-----42", '-');

// 	int i = 0;
// 	while (split[i] != 0)
// 		printf("%s\n", split[i++]);

// 	printf("-----\n");
// 	printf("alloc_element_count: %d\n", i + 1);
// 	printf("last_alloc_element: %p\n", split[i]);
// 	// printf("check_result: %d\n", split[2] == NULL);

// 	i = 0;
// 	while (split[i] != 0)
// 		free(split[i++]);
// 	free(split);
// 	return (0);
// }

// void printList(t_list *head)
// {
//     t_list *temp = head;

//     //iterate the entire linked list and print the data
//     while(temp != NULL)
//     {
// 		printf("%d->", *((int*) temp->content));
// 		temp = temp->next;
//     }
//     printf("NULL\n");
// }

// int main()
// {
// 	int content0 = 0;
// 	int content1 = 1;
// 	int content2 = 2;

// 	t_list *head = NULL;

// 	t_list *node_2 = ft_lstnew(&content2);
// 	ft_lstadd_front(&head, node_2);
// 	t_list *node_1 = ft_lstnew(&content1);
// 	ft_lstadd_front(&head, node_1);
// 	content2 += 40;
// 	t_list *node_0 = ft_lstnew(&content0);
// 	ft_lstadd_front(&head, node_0);

// 	int llist_size = ft_lstsize(head);
// 	printf("list size: %d\n", llist_size);

// 	t_list *last = ft_lstlast(head);

// 	printList(head);
// 	printf("last node content: %d\n", *((int*) last->content));

// 	char content_back[] = "FOREVER!";
// 	t_list *node_back = ft_lstnew(&content_back);
// 	ft_lstadd_back(&head, node_back);

// 	last = ft_lstlast(head);
// 	printList(head);
// 	printf("last node content: %s\n", (char*) last->content);

// 	return 0;
// }

// #include <stdlib.h>
// #include "libft.h"
#include <unistd.h>
// #include <string.h>

void    ft_print_result(t_list *elem)
{
        int             len;

        len = 0;
        while (((char *)elem->content)[len])
                len++;
        write(1, elem->content, len);
        write(1, "\n", 1);
}

t_list  *ft_lstnewone(void *content)
{
        t_list  *elem;

        elem = (t_list *)malloc(sizeof(t_list));
        if (!elem)
                return (NULL);
        if (!content)
                elem->content = NULL;
        else
                elem->content = content;
        elem->next = NULL;
        return (elem);
}

int main(int argc, const char *argv[])
{
        t_list          *begin;
        t_list          *elem;
        t_list          *elem2;
        t_list          *elem3;
        t_list          *elem4;
        char            *str = strdup("lorem");
        char            *str2 = strdup("ipsum");
        char            *str3 = strdup("dolor");
        char            *str4 = strdup("sit");

        elem = ft_lstnewone(str);
        elem2 = ft_lstnewone(str2);
        elem3 = ft_lstnewone(str3);
        elem4 = ft_lstnewone(str4);
        alarm(5);
        if (argc == 1 || !elem || !elem2 || !elem3 || !elem4)
                return (0);
        else if (atoi(argv[1]) == 1)
        {
                begin = NULL;
                ft_lstadd_back(&begin, elem);
                ft_lstadd_back(&begin, elem2);
                ft_lstadd_back(&begin, elem3);
                ft_lstadd_back(&begin, elem4);
                while (begin)
                {
                        ft_print_result(begin);
                        begin = begin->next;
                }
        }
        return (0);
}
