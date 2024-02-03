/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesevim <mesevim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:06:28 by mesevim           #+#    #+#             */
/*   Updated: 2024/01/27 16:57:34 by mesevim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)

{
	write (1, &a, 1);
}

void	ft_print_numbers(void)
{
	char	zero;
	char	ten;

	zero = 0;
	ten = 10;
	while (zero < ten)
	{
		ft_putchar(zero + '0');
		zero++;
	}
}
