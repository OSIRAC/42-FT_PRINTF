/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_nbr.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oislamog <oislamog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:52:16 by oislamog          #+#    #+#             */
/*   Updated: 2024/11/22 18:52:18 by oislamog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned_nbr(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
	{
		count += ft_print_unsigned_nbr(n / 10);
	}
	count += ft_print_char(n % 10 + '0');
	return (count);
}
