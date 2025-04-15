/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riasanto <riasanto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 10:21:12 by riasanto          #+#    #+#             */
/*   Updated: 2025/04/15 11:14:15 by riasanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void){
	char charAlphabet = 'z';

	while(charAlphabet >='a'){
		write(1,&charAlphabet, 1);

		charAlphabet--;
	}
}
