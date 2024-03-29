/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:56:49 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/09/27 23:53:46 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	destroy(pthread_mutex_t *mtx, t_philo_id *philo)
{
	int	i;

	i = 0;
	while (i < philo->life->number_of_philos)
		pthread_mutex_destroy(&mtx[i++]);
	free (mtx);
	free (philo);
	return (0);
}
