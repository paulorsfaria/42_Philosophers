/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:11:55 by paulo-do          #+#    #+#             */
/*   Updated: 2024/10/26 16:11:54 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/philo.h"

long int	ft_atol(char *str)
{
	long int	i;
	long int	result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result);
}

int	error_messages(int error_code)
{
	if (error_code == -1)
		printf(RED"Negative numbers not supported\n");
	if (error_code == -2)
		printf(RED"Empty args are not supported\n");
	if (error_code == -3)
		printf(RED"Only numbers and the '+' are supported\n");
	if (error_code == -4)
		printf(RED"Numbers not between the Min and Max int\n");
	printf("Please try again\n"RESET);
	return (1);
}

int	check_if_nums(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argc > i)
	{
		if (argv[i][j] == '-')
			return (-1);
		if (argv[i][0] == '\0')
			return (-2);
		if (argv[i][j] == '+')
			j++;
		while (argv[i][j] != '\0' && (argv[i][j] >= '0'
			&& argv[i][j] <= '9') && j <= 11)
			j++;
		if (argv[i][j] != '\0' && j <= 11)
			return (-3);
		if (j > 11 || ft_atol(argv[i]) > 2147483647
			|| ft_atol(argv[i]) < -2147483648)
			return (-4);
		i++;
		j = 0;
	}
	return (0);
}
