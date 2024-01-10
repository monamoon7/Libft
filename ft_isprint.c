/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: moshagha <moshagha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/08 19:01:48 by moshagha      #+#    #+#                 */
/*   Updated: 2023/10/31 11:00:41 by moshagha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int i)
{
	if (i >= 32 && i <= 126)
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	int a = 130;
// 	if (ft_isprint(a))
// 		printf("character is printable range");
// 	else
// 		printf("character is NOT in printable range");
// 	return (0);
// }