/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:05:32 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/08 22:35:13 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA(void)
{
}

HumanA::HumanA(std::string name, Weapon& w): name(name), w(w)
{
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->w.getType() << std::endl;
}
