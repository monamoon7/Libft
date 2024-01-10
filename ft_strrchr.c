/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mona <mona@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/11 18:05:46 by mona          #+#    #+#                 */
/*   Updated: 2023/11/15 16:12:11 by moshagha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_needle;

	last_needle = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			last_needle = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)last_needle);
}

// int	main(void)
// {
// 	char str[] = "Hello world 234, world bye";
// 	char *ptr = ft_strrchr(str, '0');
// 	printf("%s\n", ptr);
// 	return (0);
// }