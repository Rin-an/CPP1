/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:02:42 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/13 16:46:24 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*z;

	std::cout << "*****In heap******" << std::endl;
	z = newZombie("Aedion");
	z->annouce();
	delete(z);
	z = newZombie("Cookie");
	z->annouce();
	delete(z);
	std::cout << "******In stack******" << std::endl;
	randomChump("Choco");
	return 0;
}
