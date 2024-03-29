/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: moshagha <moshagha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/08 17:39:06 by moshagha      #+#    #+#                 */
/*   Updated: 2023/10/31 11:00:29 by moshagha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i)
{
	if ((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z')
		|| (i >= '0' && i <= '9'))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	int	a = 'y';
// 	if (ft_isalnum(a))
// 		printf("is an alphanumerical character\n");
// 	else
// 		printf("is NOT alphanumerical");
// 	return (0);
// }