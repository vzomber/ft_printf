/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unistrlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzomber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 15:36:57 by vzomber           #+#    #+#             */
/*   Updated: 2018/07/24 15:37:00 by vzomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_unistrlen(wchar_t *s)
{
	size_t	i;
	int		len;

	i = 0;
	len = 0;
	while (s[i])
	{
		len += count_bytes(s[i]);
		i++;
	}
	return (len);
}