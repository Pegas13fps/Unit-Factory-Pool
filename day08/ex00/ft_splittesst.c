/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splittesst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btymoshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 17:04:20 by btymoshc          #+#    #+#             */
/*   Updated: 2017/08/05 17:55:32 by btymoshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	**ft_split_whitespaces(char *str)
{
	char **str_split;
	char **str_tmp;
	int len;
	int i;
	int count_word;

	count_word = 0;
	len = 0;
	i = 0;
	while (str)
	{
		if (str[len] != 9 || str[len] != 32 || str[len] != '\n')
			count_word++;
		len++;
	}
	*str_split = (char*)malloc(sizeof(char) * (len + 1));
	len = 0;
	while (len < count_word)
	{
		i = 0;
		while (str[i] != 9 || str[i] != 32 || str[i] != '\n' || str != '\0')
		{
			str_tmp[i] = str[i];
			i++;
		}
		str_split[len] = str_tmp;
		len++;
	}
	return(str_split);
}

int		main(void)
{
	char a[] = "asd asd";

	printf("%s", ft_split_whitespaces(**a));
		return (0);
}

