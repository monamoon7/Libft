/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: moshagha <moshagha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/08 18:03:38 by moshagha      #+#    #+#                 */
/*   Updated: 2023/10/31 11:03:43 by moshagha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int i)
{
	if (i >= 0 && i <= 127)
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	int	a = 578;

// 	if (ft_isascii(a))
// 		printf("integer value falls within the ASCII range");
// 	else
// 		printf("integer value does NOT fall within the Ascii range");
// 	return (0);
// }
