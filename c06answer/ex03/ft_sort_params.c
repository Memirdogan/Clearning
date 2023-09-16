/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onguler <onguler@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:55:26 by onguler           #+#    #+#             */
/*   Updated: 2023/09/16 12:55:27 by onguler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int	check_sorting(char **argv, int argc)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	char	*temporary;
	int		i;

	i = 1;
	while (!check_sorting(argv, argc))
	{
		while (argc - 1 > i)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				temporary = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temporary;
			}
			i++;
		}
		i = 1;
	}
	while (argc > i)
	{
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
	return (0);
}
