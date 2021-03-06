/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouault <mgouault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 13:53:38 by mgouault          #+#    #+#             */
/*   Updated: 2015/03/22 20:28:46 by mgouault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

char	*ft_strsub(char *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (len == 0)
		return (ft_strdup(""));
	if (!(str = (char *)ft_memalloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[start] && (i < len))
	{
		str[i] = s[start];
		++i;
		++start;
	}
	str[i] = 0;
	return (str);
}
