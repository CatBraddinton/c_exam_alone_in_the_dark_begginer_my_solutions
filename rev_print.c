/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdudko <kdudko@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 06:29:34 by kdudko            #+#    #+#             */
/*   Updated: 2019/02/12 06:43:53 by kdudko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int i;

	if (argc == 2)
	{
		i = ft_strlen(argv[1]);
		while (--i >= 0)
		{
			write(1, &argv[1][i], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
