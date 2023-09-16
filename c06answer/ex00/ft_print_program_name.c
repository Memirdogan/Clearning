/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onguler <onguler@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:38:23 by onguler           #+#    #+#             */
/*   Updated: 2023/09/16 13:38:24 by onguler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc >= 1)
	{
		while (argv[0][i])
		{
			write(1, &argv[0][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
