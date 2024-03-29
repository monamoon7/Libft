/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mona <mona@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/31 03:39:44 by mona          #+#    #+#                 */
/*   Updated: 2023/11/13 15:12:15 by moshagha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*mem;

	len = ft_strlen(s1);
	mem = (char *)malloc(len + 1);
	if (!mem)
		return (NULL);
	ft_memcpy(mem, s1, len);
	mem[len] = '\0';
	return (mem);
}

// int	main(void)
// {
// 	char *original = "Hello!";
// 	char *duplicate;

// 	duplicate = ft_strdup(original);

// 	if (duplicate != NULL)
// 	{
// 		printf("Original: %s\n", original);
// 		printf("Duplicate: %s\n", duplicate);
// 		free(duplicate);
// 	}
// 	else
// 		printf("Memory allocation failed\n");
// 	return (0);
// }
