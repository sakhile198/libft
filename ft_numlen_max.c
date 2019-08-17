/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen_max.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 14:37:31 by smsibi            #+#    #+#             */
/*   Updated: 2019/08/16 14:38:20 by smsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_numlen_max(intmax_t nb, int base)
{
	int	len;

	if (base < 2)
		return (0);
	len = (nb < 0) ? 2 : 1;
	while ((nb /= base))
		len++;
	return (len);
}
