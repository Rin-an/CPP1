/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:08:10 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/08 22:37:28 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
# define HUMAN_B_H
# include "Weapon.hpp"

class	HumanB{
	Weapon*	w;
	std::string	name;
	public :
		HumanB();
		~HumanB();
		HumanB(std::string name);
		void	setWeapon(Weapon& w);
		void	attack(void);
};
#endif
