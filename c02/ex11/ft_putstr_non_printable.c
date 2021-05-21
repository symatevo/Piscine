/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: symatevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 18:44:08 by symatevo          #+#    #+#             */
/*   Updated: 2020/12/07 18:44:10 by symatevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hex(char c)
{
	int		neg;
	char	n1;
	char	n2;

	ft_putchar('\\');
	if (c < 0)
	{
		neg = (-128 - (c)) * (-1) + 128;
		n1 = neg / 16;
		n2 = neg % 16;
	}
	else
	{
		n1 = c / 16;
		n2 = c % 16;
	}
	if (n1 < 10)
		ft_putchar(n1 + '0');
	else
		ft_putchar(n1 + 87);
	if (n2 < 10)
		ft_putchar(n2 + '0');
	else
		ft_putchar(n2 + 87);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
		{
			ft_putchar(str[i]);
		}
		else
		{
			hex(str[i]);
		}
		i++;
	}
}
