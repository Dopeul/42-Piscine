/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nibouniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:56:40 by nibouniq          #+#    #+#             */
/*   Updated: 2022/07/18 18:32:39 by nibouniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	powlen;
	int	nbr;

	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	if (power == 0)
		return (1);
	powlen = power;
	nbr = nb;
	if (powlen > 0)
	{
		nbr = nb * ft_recursive_power(nb, power - 1);
	}
	return (nbr);
}
