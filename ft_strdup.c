/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 01:35:33 by marvin            #+#    #+#             */
/*   Updated: 2024/10/12 01:35:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dst;
	size_t	size;

	size = ft_strlen(src) + 1;
	dst = (char *) malloc(size);
	if (!dst)
		return (NULL);
	ft_memcpy(dst, src, size);
	return (dst);
}