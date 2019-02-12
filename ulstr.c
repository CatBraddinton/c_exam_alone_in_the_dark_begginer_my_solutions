/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdudko <kdudko@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 07:10:30 by kdudko            #+#    #+#             */
/*   Updated: 2019/02/12 07:17:12 by kdudko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_case(char c)
{
	if (c > 64 && c < 91)
	{
		c += 32;
		write(1, &c, 1);
	}
	else if (c > 96 && c < 123)
	{
		c -= 32;
		write(1, &c, 1);
	}
	else
		write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			print_case(argv[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
