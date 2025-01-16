/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malmarzo <malmarzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 09:24:23 by malmarzo          #+#    #+#             */
/*   Updated: 2025/01/16 09:24:23 by malmarzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*md_dest;
	unsigned char	*ms_src;

	md_dest = (unsigned char *)dest;
	ms_src = (unsigned char *)src;
	i = 0;
	if (md_dest == NULL && ms_src == NULL)
		return (NULL);
	if (md_dest > ms_src)
		while (++i <= n)
			md_dest[n - i] = ms_src[n - i];
	else
		while (n-- > 0)
			*(md_dest++) = *(ms_src++);
	return (dest);
}
