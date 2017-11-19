/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btymoshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 14:26:37 by btymoshc          #+#    #+#             */
/*   Updated: 2017/08/03 14:32:30 by btymoshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int s;

	s = 0;
	while (str[s] != '\0')
	{
		s++;
	}
	return (s);
}

char	*ft_strdup(char *src)
{
	char	*tmp;
	int		i;
	int		result;
	int		endline;

	i = 0;
	while (src[i] != '\0')
		i++;
	endline = i;
	tmp = (char*)malloc(i + 1);
	if (tmp == NULL)
		return (NULL);
	result = 0;
	while (result <= endline)
	{
		tmp[result] = src[result];
		result++;
	}
	return (tmp);
}
