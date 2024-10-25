/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:37:36 by paulo-do          #+#    #+#             */
/*   Updated: 2024/10/25 17:37:36 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

long int	ft_atoi(char *str)
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

int	check_if_nums(int argc, char *argv[])
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(argc > i)
	{
		if (argv[i][j] == '-')
			return (-1);
		if (argv[i][0] == '\0')
			return (-2);
		if (argv[i][j] == '+')
			j++;
		while(argv[i][j] != '\0' && (argv[i][j]  >= '0' && argv[i][j]  <= '9'))
			j++;
		if (argv[i][j] != '\0')
			return (-3);
		if (ft_atoi(argv[i]) > 2147483647 || ft_atoi(argv[i]) < -2147483648)
			return (-4);
		i++;
		j = 0;
	}
	return (0);
}

int error_messages(int error_code)
{
	if (error_code == -1)
			printf("Negative numbers not supported\n");
	if (error_code == -2)
		printf("Empty args are not supported\n");
	if (error_code == -3)
		printf("Only numbers and the '+' are supported\n");
	if (error_code == -4)
		printf("Numbers not between the Min and Max int\n");
	printf("Please try again\n");
	return (1);
}

int main(int argc, char *argv[])
{
	int checker;

	checker = 0;
	if (argc == 6 || argc == 5)
	{
		checker = check_if_nums(argc - 1, argv + 1);
		if(checker < 0)
			return (error_messages(checker));
		printf("chekeru %i\n",checker);
		return (0);
	}
	printf("Invalid number of args\n");
	return(0);
}