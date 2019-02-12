/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdudko <kdudko@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 07:20:08 by kdudko            #+#    #+#             */
/*   Updated: 2019/02/12 07:27:38 by kdudko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c)
{
	if ((c > 64 && c < 78) || (c > 96 && c < 110))
	{
		c += 13;
		write(1, &c, 1);
	}
	else if ((c > 78 && c < 91) || (c > 109 && c < 123))
	{
		c -= 13;
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
			print_char(argv[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
