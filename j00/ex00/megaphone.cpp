/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/15 10:48:39 by mdarriga          #+#    #+#             */
/*   Updated: 2015/06/15 11:22:42 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>

char	capitalize(char c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}

int		main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (av[i] != 0)
		{
			j = 0;
			while (av[i][j] != 0)
			{
				std::cout << capitalize(av[i][j]);
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}