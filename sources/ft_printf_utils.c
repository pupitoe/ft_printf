/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:07:21 by tlassere          #+#    #+#             */
/*   Updated: 2023/11/16 19:37:01 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf_utils.h"

int	ft_null(int *size)
{
	ssize_t	val;

	val = ft_putstr_fd("(null)", 1);
	if (val == -1 || size == NULL)
		return (-1);
	*size += (int)val;
	return (0);
}

int	ft_nil(int *size)
{
	ssize_t	val;

	val = ft_putstr_fd("0x0", 1);
	if (val == -1 || size == NULL)
		return (-1);
	*size += (int)val;
	return (0);
}

int	ft_print_str(char *str, int *size)
{
	ssize_t	val;

	if (str == NULL)
		return (ft_null(size));
	val = ft_putstr_fd(str, 1);
	if (val == -1 || size == NULL)
		return (-1);
	*size += (int)val;
	return (1);
}
