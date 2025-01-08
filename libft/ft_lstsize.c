/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malmarzo <malmarzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 10:00:26 by malmarzo          #+#    #+#             */
/*   Updated: 2025/01/08 10:00:26 by malmarzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*node;

	node = lst;
	count = 0;
	while (node != NULL)
	{
		count++;
		node = node->next;
	}
	return (count);
}

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	int		size;

// 	// Creating nodes
// 	node1 = ft_lstnew("Node 1");
// 	node2 = ft_lstnew("Node 2");
// 	node3 = ft_lstnew("Node 3");

// 	// Linking nodes
// 	head = node1;
// 	node1->next = node2;
// 	node2->next = node3;

// 	// Testing ft_lstsize
// 	size = ft_lstsize(head);
// 	printf("Size of the linked list: %d\n", size);

// 	// Freeing allocated memory
// 	free(node1);
// 	free(node2);
// 	free(node3);

// 	return (0);
// }
