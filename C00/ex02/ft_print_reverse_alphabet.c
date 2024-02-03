/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesevim <mesevim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 15:16:58 by mesevim           #+#    #+#             */
/*   Updated: 2024/01/27 15:36:53 by mesevim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write (1, &a, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	i;
	char	a;

	i = 'z';
	a = 'a';
	while (a <= i)
	{
		ft_putchar(i);
		i--;
	}
}
