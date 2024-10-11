/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 02:23:54 by marvin            #+#    #+#             */
/*   Updated: 2024/10/11 02:23:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h> 

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    const char  *s;

    d = dest;
    s = src;
    while (n--)
    {
        *d++ = *s++;
    }
    return (dest);   
}