/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isacil.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmallawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 15:07:06 by rmallawa          #+#    #+#             */
/*   Updated: 2022/01/17 15:09:01 by rmallawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** LIBRARY: <ctype.h>
** SYNOPSIS: test for ASCII character
**
** DESCRIPTION:
** 		The isascii() function tests for an ASCII character, which is any
**	character between 0 and octal 0177 inclusive.
*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
