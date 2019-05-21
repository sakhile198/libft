/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 15:37:18 by smsibi            #+#    #+#             */
/*   Updated: 2019/05/21 16:10:30 by smsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != c && *s != '\0')
		s++;
	if (*s == c)
		return (char *)s;
	else
		return (NULL);
}
