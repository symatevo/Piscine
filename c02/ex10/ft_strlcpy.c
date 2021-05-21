/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: symatevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 18:43:47 by symatevo          #+#    #+#             */
/*   Updated: 2020/12/07 18:43:48 by symatevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				srclen(char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		++i;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	if (size == 0)
	{
		return (srclen(src));
	}
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (srclen(src));
}
