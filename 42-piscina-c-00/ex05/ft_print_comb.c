/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riasanto <riasanto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 10:21:12 by riasanto          #+#    #+#             */
/*   Updated: 2025/04/16 18:40:09 by riasanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	f_write(char col1, char col2, char col3)
{
	write(1, &col1, 1);
	write(1, &col2, 1);
	write(1, &col3, 1);
	if (!(col1 == '7' && col2 == '8' && col3 == '9'))
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	col1;
	char	col2;
	char	col3;

	col1 = '0';
	while (col1 <= '7')
	{
		col2 = col1 + 1;
		while (col2 <= '8')
		{
			col3 = col2 + 1;
			while (col3 <= '9')
			{					
				if (col1 != col2 && col1 != col3 && col2 != col3)
					f_write(col1, col2, col3);
				col3++;
			}
			col2++;
		}
		col1++;
	}
}
