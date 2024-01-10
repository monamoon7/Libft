/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: moshagha <moshagha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 19:32:00 by moshagha      #+#    #+#                 */
/*   Updated: 2023/10/08 17:18:27 by moshagha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int i)
{
	if ((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z'))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	char a = '5';
// 	if (ft_isalpha(a))
// 		write(1, "is alphabetic\n", 15);
// 	else
// 		write(1, "not alphabetic\n", 18);
// 	return (0);
// }