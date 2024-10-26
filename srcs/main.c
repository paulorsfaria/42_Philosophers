/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:37:36 by paulo-do          #+#    #+#             */
/*   Updated: 2024/10/26 18:49:24 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/philo.h"

t_inputs	ft_set_inputs(int argc, char *argv[])
{
	int i;
	t_inputs *inputs;

	inputs = NULL;
	i = 0;
	inputs->nbr_philos = ft_atol(argv[0]);
	inputs->time_to_die = ft_atol(argv[1]);
	inputs->time_to_eat = ft_atol(argv[2]);
	inputs->time_to_sleep = ft_atol(argv[3]);
	if(argc == 5)
		inputs->max_meals = ft_atol(argv[4]);
	else
		inputs->max_meals = -1;
	
}

int	main(int argc, char *argv[])
{
	int	checker;

	checker = 0;
	if (argc == 6 || argc == 5)
	{
		checker = check_if_nums(argc - 1, argv + 1);
		if (checker < 0)
			return (error_messages(checker));
		printf("chekeru %i\n", checker);
		return (0);
	}
	printf(BRED"Invalid number of args\n"RESET);
	return (0);
}
