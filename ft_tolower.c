/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 10:59:02 by smsibi            #+#    #+#             */
/*   Updated: 2019/05/24 10:59:33 by smsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_tolower(int c)
{
	unsigned char c1;

	c1 = (unsigned char)c;
	if (c1 >= 'A' && c1 <= 'Z')
		return (c1 = c1 + 'a' - 'A');
	else
		return (c1);
}