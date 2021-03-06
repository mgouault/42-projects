/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouault <mgouault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 12:03:23 by mgouault          #+#    #+#             */
/*   Updated: 2015/03/17 13:39:50 by mgouault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

t_bool ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
	(c >= '0' && c <= '9'))
		return (TRUE);
	return (FALSE);
}
