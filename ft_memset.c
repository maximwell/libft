/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 02:19:13 by marvin            #+#    #+#             */
/*   Updated: 2024/10/10 02:19:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void *ft_memset(void *s, int c, size_t n) {
    unsigned char *ptr = (unsigned char *)s;
    while (n--) {
        *ptr++ = (unsigned char)c;
    }
    return s;
}
