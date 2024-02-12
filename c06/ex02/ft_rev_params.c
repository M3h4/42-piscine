/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesevim <mesevim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:28:35 by mesevim           #+#    #+#             */
/*   Updated: 2024/02/12 16:43:11 by mesevim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	j = ac - 1;
	while (j >= 1)
	{
		i = 0;
		while (av[j][i])
		{
			write (1, &av[j][i], 1);
			i++;
		}
		write (1, "\n", 1);
		j--;
	}
	return (0);
}
