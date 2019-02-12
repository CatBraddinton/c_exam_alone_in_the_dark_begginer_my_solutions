/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdudko <kdudko@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 08:22:45 by kdudko            #+#    #+#             */
/*   Updated: 2019/02/12 08:31:19 by kdudko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
				i++;
			while (argv[1][i] && (argv[1][i] != ' ' || argv[1][i] != '\t'))
			{
				write(1, &argv[1][i], 1);
				i++;
				if (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
				{
					write(1, "\n", 1);
					return (0);
				}
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
