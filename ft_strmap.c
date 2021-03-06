/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 09:24:37 by smsibi            #+#    #+#             */
/*   Updated: 2019/06/12 08:10:43 by smsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*fresh;

	if (!s || (!(fresh = (char *)malloc(sizeof(char) * ft_strlen(s) + 1))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		fresh[i] = f((char)s[i]);
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
