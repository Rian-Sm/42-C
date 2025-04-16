/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riasanto <riasanto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 10:21:12 by riasanto          #+#    #+#             */
/*   Updated: 2025/04/16 17:40:07 by riasanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	charalphabet;

	charalphabet = 'z';
	while (charalphabet >= 'a')
	{
		write(1, &charalphabet, 1);
		charalphabet--;
	}
}
