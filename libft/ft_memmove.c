/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 17:16:28 by rtulchiy          #+#    #+#             */
/*   Updated: 2017/12/05 20:42:13 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*st;

	st = dst;
	if (dst <= src || dst >= (src + len))
		while (len--)
			*(unsigned char*)dst++ = *(unsigned char*)src++;
	else
	{
		dst += len - 1;
		src += len - 1;
		while (len--)
			*(unsigned char*)dst-- = *(unsigned char*)src--;
	}
	return (st);
}
