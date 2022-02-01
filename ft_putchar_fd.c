/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmallawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:30:18 by rmallawa          #+#    #+#             */
/*   Updated: 2022/01/18 12:51:53 by rmallawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** LIBRARY: <stdio.h>
** SYNOPSIS: output a character to given file
**
** DESCRIPTION:
** 		The fputc() function writes the character c (converted to an ``unsigned
**	char'') to the output stream pointed to by stream.
** 		[42 PDF] Outputs the character ’c’ to the given file descriptor.
*/
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
