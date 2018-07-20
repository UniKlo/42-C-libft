/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 10:50:55 by khou              #+#    #+#             */
/*   Updated: 2018/07/16 11:20:49 by khou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	tf_len;

	i = 0;
	tf_len = ft_strlen(to_find);
	if (!*to_find)
		return ((char *)str);
	while (*str && i + tf_len <= len)
	{
		if (ft_strncmp(&str[i], to_find, tf_len) == 0)
			return ((char *)str + i);
		i++;
	}
	return (0);
}
