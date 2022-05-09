/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 20:15:09 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/05/09 15:47:56 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void printing(philosopher *ph, unsigned long  i, int id, char *str)
{
    pthread_mutex_lock(ph->pr);
    printf("%lums %d %s\n", i, id , str);
    pthread_mutex_unlock(ph->pr);
}