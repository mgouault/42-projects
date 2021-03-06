/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_i_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouault <mgouault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/15 20:47:49 by mgouault          #+#    #+#             */
/*   Updated: 2014/11/30 17:28:45 by mgouault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_i_strchr(char *s, int c)
{
	int i;

	i = -1;
	while (s[++i] || c == 0)
		if (s[i] == (char)c)
			return (i);
	return (-1);
}
