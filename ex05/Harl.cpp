/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 14:11:15 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/11 15:42:31 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now."  << std::endl;
}

int	Harl::complain_level(std::string level)
{
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i = -1;

	while (++i < 4)
	{
		if (level == levels[i])
			return (i + 1);
	}
	return (0);
}

void	Harl::complain(std::string level)
{
	void (Harl::* commandtab[]) (void) = {&Harl::debug, &Harl::info, &Harl:: warning, &Harl::error};

	switch (this->complain_level(level)){
		case (1) :
			(this->*commandtab[0])();
			break;
		case (2) :
			(this->*commandtab[1])();
			break;
		case (3) :
			(this->*commandtab[2])();
			break;
		case (4) :
			(this->*commandtab[3])();
			break;
		default :
			std::cout << "Eeeehm.." << std::endl;
			break;
	};
}
