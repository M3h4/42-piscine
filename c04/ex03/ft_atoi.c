/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesevim <mesevim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:38:54 by mesevim           #+#    #+#             */
/*   Updated: 2024/02/10 19:49:18 by mesevim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	final;
	int	sign;
	int	count;

	i = 0;
	sign = 1;
	final = 0;
	count = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			count++;
		i++;
	}
	if (count % 2 != 0)
		sign = -1;
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		final = (final * 10) + (str[i] - 48);
		i++;
	}
	return (final * sign);
}
