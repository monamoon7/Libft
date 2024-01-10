/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: moshagha <moshagha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/04 12:53:50 by moshagha      #+#    #+#                 */
/*   Updated: 2023/11/17 11:38:40 by moshagha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			f(i, s + i);
			i++;
		}
	}
}

// void	index_char(unsigned int i, char *c)
// {
// 	printf("Index: %u, Char: %s\n", i, c);
// }

// // int main(void)
// // {
// // 	char	str[] = "Hello";

// // 	ft_striteri(str, index_char);
// // 	return (0);
// // }