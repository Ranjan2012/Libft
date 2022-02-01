/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmallawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:52:19 by rmallawa          #+#    #+#             */
/*   Updated: 2022/01/18 13:55:17 by rmallawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** LIBRARY: N/A
** SYNOPSIS: output string to given file
**
** DESCRIPTION:
** 		Outputs the string ’s’ to the given file descriptor.
*/
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
