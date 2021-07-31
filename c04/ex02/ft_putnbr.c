/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: symatevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 15:10:05 by symatevo          #+#    #+#             */
/*   Updated: 2020/12/16 15:27:37 by symatevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long b;

	b = nb;
	if (b < 0)
	{
		ft_putchar('-');
		b = b * (-1);
	}
	if (b > 9)
	{
		ft_putnbr(b / 10);
		ft_putnbr(b % 10);
	}
	else
	{
		ft_putchar(b + '0');
	}
}
