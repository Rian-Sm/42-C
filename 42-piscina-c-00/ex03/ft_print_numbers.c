/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riasanto <riasanto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 10:21:12 by riasanto          #+#    #+#             */
/*   Updated: 2025/04/15 11:14:15 by riasanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void){
	char charNumbers = '0';

	while(charNumbers<='9'){
		write(1, &charNumbers, 1);
		charNumbers++;
	}
}
