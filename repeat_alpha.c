/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdudko <kdudko@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 05:55:13 by kdudko            #+#    #+#             */
/*   Updated: 2019/02/12 06:24:23 by kdudko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	count_repeats(char c)
{
	if (c > 64 && c < 90)
		return (c - 64);
	else if (c > 96 && c < 123)
		return (c - 96);
	return (1);
}

int	main(int argc, char **argv)
{
	int repeats;

	if (argc == 2)
	{
		while (*argv[1])
		{
			repeats = count_repeats(*argv[1]);
			while (repeats > 0)
			{
				write(1, &*argv[1], 1);
				repeats--;
			}
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
