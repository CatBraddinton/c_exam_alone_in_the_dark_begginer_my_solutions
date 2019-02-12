/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdudko <kdudko@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 08:36:08 by kdudko            #+#    #+#             */
/*   Updated: 2019/02/12 08:57:41 by kdudko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int i;
	int num;
	int res;

	res = 0;
	i = 0;
	while (str[i])
	{
		if ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') ||
			(str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
			i++;
		else if ((str[i] < '0') || (str[i] > '9'))
			return (res / 10);
		else if (str[i] >= '0' && str[i] <= '9')
		{
			num = str[i] - '0';
			res = (res + num) * 10;
			i++;
			if ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') ||
				(str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
				return (res / 10);
		}
	}
	return (res / 10);
}
