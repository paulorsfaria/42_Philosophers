/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:37:36 by paulo-do          #+#    #+#             */
/*   Updated: 2024/10/26 16:13:32 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/philo.h"

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
