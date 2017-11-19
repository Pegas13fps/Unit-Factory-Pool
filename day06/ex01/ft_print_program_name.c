/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btymoshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 17:16:56 by btymoshc          #+#    #+#             */
/*   Updated: 2017/08/02 17:17:01 by btymoshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int name;

	name = 0;
	if (argc >= 1)
		while (argv[0][name])
		{
			ft_putchar(argv[0][name]);
			name++;
		}
	return (0);
}
