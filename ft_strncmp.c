/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mona <mona@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/11 18:43:37 by mona          #+#    #+#                 */
/*   Updated: 2023/10/31 11:07:13 by moshagha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n > 0)
	{
		if (s1[i] != s2[i] || !s1[i] || !s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
		n--;
	}
	return (0);
}

// int	main(void)
// {
// 	char *str1 = "Hallo";
// 	char *str2 = "Hallm";

// 	printf("%i\n", ft_strncmp(str1, str2, 5));
// 	return (0);
// }