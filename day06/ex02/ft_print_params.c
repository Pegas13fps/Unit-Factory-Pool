/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btymoshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 18:06:39 by btymoshc          #+#    #+#             */
/*   Updated: 2017/08/02 18:07:15 by btymoshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int name;
	int j;

	name = 1;
	while (name < argc)
	{
		j = 0;
		while (argv[name][j])
		{
			ft_putchar(argv[name][j]);
			j++;
		}
		ft_putchar('\n');
		name++;
	}
	return (0);
}
