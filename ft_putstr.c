/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmounj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:59:38 by kelmounj          #+#    #+#             */
/*   Updated: 2023/12/06 12:59:46 by kelmounj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (!s)
		len += ft_putstr("(null)");
	else
	{
		while (s[i])
		{
			len += ft_putchr(s[i]);
			i++;
		}
	}
	return (len);
}
