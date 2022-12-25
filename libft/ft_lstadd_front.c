/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbattal <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 08:36:57 by rbattal           #+#    #+#             */
/*   Updated: 2022/12/13 08:36:59 by rbattal          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
// #include <stdio.h>
// int main()
// {
// 	t_list *node1, *node2;
// 	node1 = ft_lstnew("42 ");	
// 	node2 = ft_lstnew("kocaeli");	
// 	ft_lstadd_front(&node2, node1);
// 	printf("%s", node2->next->content);
// 	printf("%s", node2->content);
// }