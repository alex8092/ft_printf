/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/02 05:34:27 by amerle            #+#    #+#             */
/*   Updated: 2014/05/02 05:34:27 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_common.h"

void	ft_putchar(char c)
{
	ssize_t	ret;

	ret = write(1, &c, 1);
	(void)ret;
}