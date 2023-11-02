/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-cola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:37:09 by ede-cola          #+#    #+#             */
/*   Updated: 2023/10/30 15:43:52 by ede-cola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	j;
	long	n;

	i = 1;
	j = 0;
	n = nb;
	while (n > 0)
	{
		n = n - i;
		i += 2;
		j++;
	}
	if (n == 0)
		return (j);
	else
		return (0);
}
