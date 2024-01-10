/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mona <mona@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/11 15:48:07 by mona          #+#    #+#                 */
/*   Updated: 2023/11/15 16:12:00 by moshagha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

// int	main(void)
// {
// 	char str[] = "Hello was geht?";
// 	char *ptr = ft_strchr(str, 'w');
// 	// char *ptr = strchr(str, 'w');
// 	printf("%s", ptr);
// 	return (0);
// }