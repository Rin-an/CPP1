/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:02:42 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/05 16:40:05 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*z;
	int	i = -1;

	z = zombieHorde(13,"Cinnamon");
	while (++i < 13)
		z[i].annouce();
	delete[] z;
	return 0;
}
