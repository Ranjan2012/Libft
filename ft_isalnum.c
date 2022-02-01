/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmallawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:54:07 by rmallawa          #+#    #+#             */
/*   Updated: 2022/01/17 14:57:13 by rmallawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** LIBRARY: <ctype.h>
** SYNOPSIS: alphanumeric character test
**
** DESCRIPTION:
** 		The isalnum() function tests for any character for which isalpha(3) or
**	isdigit(3) is true.
*/
int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
