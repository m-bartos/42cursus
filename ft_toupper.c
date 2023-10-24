/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:20:03 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/23 13:38:39 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char	a;
	char	b;

	a = 'z';
	b = 'z' + 1;
	printf("%d\n", toupper(a));
	printf("%d\n", toupper(b));
	printf("%d\n", ft_toupper(a));
	printf("%d\n", ft_toupper(b));
	return (0);
}
*/