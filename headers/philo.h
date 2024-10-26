#ifndef PHILO_H
# define PHILO_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <pthread.h>
# include <sys/time.h>
# include <stdbool.h>
/************************************************/
/*************Herwin-Williams Paints*************/
/*Preatty much the best you can get arround here*/
/************************************************/
// Reset color
# define RESET "\033[0m"
// Regular colors
# define BLACK "\033[0;30m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define MAGENTA "\033[0;35m"
# define CYAN "\033[0;36m"
# define WHITE "\033[0;37m"
// Bold colors
# define BBLACK "\033[1;30m"
# define BRED "\033[1;31m"
# define BGREEN "\033[1;32m"
# define BYELLOW "\033[1;33m"
# define BBLUE "\033[1;34m"
# define BMAGENTA "\033[1;35m"
# define BCYAN "\033[1;36m"
# define BWHITE "\033[1;37m"

/*          sporks                   */
typedef struct s_fork
{
	pthread_mutex_t fork;
	int	fork_id;
}			t_fork;

/*          philo                    */

typedef struct s_philo
{
	int			id;
	long		meals_counter;
	bool		max_meals;
	long		last_meal_time;
	t_fork		*left_fork;
	t_fork		*right_fork;
	pthread_t	thread_id;
}			t_philo

typedef	struct s_inputs
{
	long	nbr_philos;
	long	time_to_die;
	long	time_to_eat;
	long	time_to_sleep;
	long	max_meals;
	long	time_start_simulation;
	bool	end_simulation;
	t_fork	*forks;
	t_philo *philos;
}	t_inputs;



long int	ft_atol(char *str);
int			check_if_nums(int argc, char *argv[]);
int			error_messages(int error_code);

#endif
