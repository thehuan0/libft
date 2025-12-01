/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-s <jperez-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 20:00:41 by jperez-s          #+#    #+#             */
/*   Updated: 2025/10/14 07:41:07 by jperez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_str;
	unsigned char	*src_str;

	if (!dst && !src)
		return (NULL);
	if (n == 0)
		return (dst);
	dst_str = (unsigned char *)dst;
	src_str = (unsigned char *)src;
	while (n--)
		*dst_str++ = *src_str++;
	return (dst);
}
