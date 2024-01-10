/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: moshagha <moshagha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 12:40:39 by moshagha      #+#    #+#                 */
/*   Updated: 2023/10/31 11:04:15 by moshagha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int i)
{
	if (i >= 'a' && i <= 'z')
		i = i - 32;
	return (i);
}

// int	main(void)
// {
// 	char ch = 'h';
// 	char result = ft_toupper(ch);
// 	printf("uppercase of %c is %c\n", ch, result);

// 	return (0);
// }