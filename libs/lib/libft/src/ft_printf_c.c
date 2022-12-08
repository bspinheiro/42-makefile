/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_arg_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 04:16:11 by bda-silv          #+#    #+#             */
/*   Updated: 2022/06/29 10:24:06 by bda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	f_arg_c(int *counter, va_list ap)
{
	char	c;

	c = va_arg(ap, int);
	*counter += write(1, &c, 1);
	return (*counter);
}