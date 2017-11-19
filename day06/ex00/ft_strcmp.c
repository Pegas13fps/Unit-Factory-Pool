/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btymoshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 18:54:32 by btymoshc          #+#    #+#             */
/*   Updated: 2017/08/01 21:12:34 by btymoshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	char *strf;
	char *strs;

	strf = s1;
	strs = s2;
	while (*strf || *strs)
	{
		if (*strf != *strs)
			return (*strf - *strs);
		strf++;
		strs++;
	}
	return (0);
}
