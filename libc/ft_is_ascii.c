/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouault <mgouault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 12:03:34 by mgouault          #+#    #+#             */
/*   Updated: 2017/12/03 19:19:30 by mgouault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

t_bool	ft_is_ascii(char c)
{
	return (c >= 0 && c <= 127);
}
