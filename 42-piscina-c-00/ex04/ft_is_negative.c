/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riasanto <riasanto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 10:21:12 by riasanto          #+#    #+#             */
/*   Updated: 2025/04/15 11:14:15 by riasanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n){
    char result;

    if (n < 0) 
        result = 'N';
    else 
        result = 'P';

    write(1, &result, 1);
}
