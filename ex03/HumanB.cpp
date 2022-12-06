/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:09:58 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/06 01:45:49 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void)
{
	this->w = nullptr;
}

HumanB::~HumanB(void)
{
}

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << this->w->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon w)
{
	this->w = &w;
}
