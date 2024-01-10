/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: moshagha <moshagha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/08 19:18:58 by moshagha      #+#    #+#                 */
/*   Updated: 2023/10/31 11:47:17 by moshagha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// int	main(void)
// {
// 	const char	*str = "Hello";
// 	printf("%ld", ft_strlen(str));
// 	return (0);
// }