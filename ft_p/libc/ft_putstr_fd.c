/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouault <mgouault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:38:55 by mgouault          #+#    #+#             */
/*   Updated: 2014/11/15 20:32:43 by mgouault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

void ft_putstr_fd(char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}
