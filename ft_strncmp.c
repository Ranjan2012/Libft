/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmallawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 10:22:09 by rmallawa          #+#    #+#             */
/*   Updated: 2022/01/17 11:22:40 by rmallawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 == *s2 && *s1 && n > 0)
	{
		++s1;
		++s2;
		--n;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
