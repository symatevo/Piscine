/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: symatevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:36:07 by symatevo          #+#    #+#             */
/*   Updated: 2020/12/02 17:21:08 by symatevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	tpel(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	int		zro;
	int		tiv;
	char	ch;

	zro = 1;
	tiv = nb;
	ch = tiv + '0';
	if (nb < 0)
	{
		tpel('-');
		nb = -nb;
	}
	while (tiv > 10)
	{
		tiv = tiv / 10;
		zro = zro * 10;
	}
	tpel(ch);
	if (nb >= 10)
	{
		return (ft_putnbr(nb % zro));
	}
}
