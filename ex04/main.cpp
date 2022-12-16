/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 23:35:53 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/10 13:49:40 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_replace.hpp"

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "Few arguments!" << std::endl;
	else if (argc > 4)
		std::cout << "Too many aruguments" << std::endl;
	else
		ft_replace(argv[1], argv[2], argv[3]);
	return 0;
}
