/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 18:53:57 by mboudhar          #+#    #+#             */
/*   Updated: 2023/07/19 21:48:58 by mboudhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	sub(char *str, char *tf)
{
	int	i;

	i = 0;
	while (tf[i] != '\0')
	{
		if (str[i] == tf[i])
			i++;
		else
			return (0);
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		n = sub(&str[i], to_find);
		if (n == 0)
			i++;
		else
			return (str + i);
	}
	return (0);
}
