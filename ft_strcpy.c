/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdudko <kdudko@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 05:25:10 by kdudko            #+#    #+#             */
/*   Updated: 2019/02/12 05:44:16 by kdudko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *s1, char *s2)
{
	char *p;

	p = s1;
	while (*s2)
		*s1++ = *s2++;
	*s1 = *s2;
	return (p);
}