/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2ft_atoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-m <rlopez-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 12:22:49 by rlopez-m          #+#    #+#             */
/*   Updated: 2021/12/20 13:18:15 by rlopez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_num(char c)
{
	return (c >= '0' && c <= '9');
}

int	check_neg(int res, int n)
{
	if (n % 2 == 0)
		return (res);
	else
		return (res * -1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	n;

	n = 0;
	res = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '-')
		{
			if (str[i + 1] == ' ')
				break ;
			else
				n++;
		}
		else if (is_num(str[i]))
		{
			res = res * 10 + str[i] - '0';
			if (!is_num(str[i + 1]))
				break ;
		}
		i++;
	}
	return (check_neg(res, n));
}
