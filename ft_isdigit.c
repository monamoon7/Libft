/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mona <mona@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/08 01:35:29 by mona          #+#    #+#                 */
/*   Updated: 2023/10/08 17:18:49 by moshagha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int i)
{
	if (i >= '0' && i <= '9')
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	int	i = '8';
// 	if (ft_isdigit(i))
// 		printf("is digit\n");
// 	else
// 		printf("is not digit\n");
// 	return (0);
// }