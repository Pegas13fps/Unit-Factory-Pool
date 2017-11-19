e
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btymoshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 15:30:22 by btymoshc          #+#    #+#             */
/*   Updated: 2017/08/05 14:56:34 by btymoshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char i;
	char b;
	char c;

	i = 0;
	while (str[i] != '\0')
	{
		c = i;
		b = 0;
		while (str[c] == to_find[b])
		{
			c++;
			b++;
		}
		if (to_find[b] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
