/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdudko <kdudko@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 04:55:36 by kdudko            #+#    #+#             */
/*   Updated: 2019/02/12 05:09:30 by kdudko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** just for fun aka hard code for no purpose i think
*/

void	maff_alpha_v1(void)
{
	char even;
	char odd;

	even = 'a';
	while (even <= 'y')
	{
		write(1, &even, 1);
		odd = ++even - 32;
		write(1, &odd, 1);
		even++;
	}
	write(1, "\n", 1);
}

int		main(void)
{
	maff_alpha_v1();
	write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
	return (0);
}
