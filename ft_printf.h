/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oislamog <oislamog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:53:08 by oislamog          #+#    #+#             */
/*   Updated: 2024/11/22 18:53:08 by oislamog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *a, ...);
int	ft_print_str(char *c);
int	ft_print_nbr(int n);
int	ft_print_char(int c);
int	ft_print_unsigned_nbr(unsigned int n);
int	ft_print_hex(void *arg);
int	ft_print_x(unsigned int nb, int type);
int	ft_base(unsigned long nb, char *alpha);

#endif
