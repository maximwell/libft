/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:19:23 by marvin            #+#    #+#             */
/*   Updated: 2024/10/11 15:19:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t ft_strlcpy(char *dest, char *src, size_t size)
{
    size_t count;
    size_t index;

    count = 0;
    index = 0;
    while (src[count] != '\0')
    {
        count++;
    }
    if (size != 0)
    {
        while(src[index] != '\0' && index < (size - 1))
        {
            dest[index] = src[index];
        }
        dest[index] = '\0';
    }
    return (count);
}