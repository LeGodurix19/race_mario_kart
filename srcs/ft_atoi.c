/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 17:53:15 by hgoorick          #+#    #+#             */
/*   Updated: 2021/09/29 17:53:17 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

static int	test(long long num, const char *str, int sign)
{
	long long	limit;

	limit = ((num * 10) + (*str - '0')) * sign;
	if (limit < -2147483648)
		return (0);
	if (limit > 2147483647)
		return (-1);
	return (1);
}

int	ft_atoi(const char *str)
{
	unsigned int	rep;
	int				sign;
	int				i;

	rep = 0;
	sign = 1;
	i = 0;
	while (str[i] && (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' '))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = -1;
	i--;
	while (ft_isdigit(str[++i]))
	{
		if (!test(rep, &str[i], sign))
			return (0);
		if (test(rep, &str[i], sign) == -1)
			return (-1);
		rep = (rep * 10) + (str[i] - 48);
	}
	return (rep * sign);
}
