/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:02:13 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/06 02:41:20 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
# define HUMAN_A_H
# include "Weapon.hpp"

class	HumanA{
	Weapon&	w;
	std::string	name;
	public :
		HumanA();
		~HumanA();
		HumanA(std::string name, Weapon w);
		void	attack(void);
};
#endif
