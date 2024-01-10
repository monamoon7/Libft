/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: moshagha <moshagha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/12 16:46:23 by moshagha      #+#    #+#                 */
/*   Updated: 2023/11/15 15:49:11 by moshagha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*destptr;
	const unsigned char	*srcptr;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	destptr = (unsigned char *)dest;
	srcptr = (const unsigned char *)src;
	while (i < n)
	{
		destptr[i] = srcptr[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char src[] = " oka";
// 	char dest[10];

// 	ft_memcpy(dest, src, 6);

// 	printf("Before: %s\n", src);
// 	printf("After copying: %s\n", dest);
// 	return(0);
// }