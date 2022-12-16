/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 23:46:02 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/10 23:50:59 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	h;

	if (argc == 1 || argc > 2)
		std::cout << "Too many or few arguments!" << std::endl;
	else
		h.complain(argv[1]);
	return (0);
}
