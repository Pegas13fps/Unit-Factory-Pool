/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btymoshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 10:46:54 by btymoshc          #+#    #+#             */
/*   Updated: 2017/08/05 17:04:02 by btymoshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_count_words(char *str)
{
	int i;
	int sumwords;
	int count;

	i = 0;
	sumwords = 0;
	count = 0;
			
}

int		ft_lenth_word(char *str, int i)
{
	int count;

	count = 0;
	while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
	{
		count++;
		i++;
	}
	return (0);
}

char	**ft_split_whitespaces(char *str)
{
		return (0);
}

int		main(void)
{
	char sent[] = "sdsdf\12dsa";
	printf("%s\n", **ft_split_whitespaces(sent));
	return (0);
}
