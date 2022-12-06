/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:52:21 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/06 01:29:29 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>
# include <string>

class	Weapon{
	std::string	type;
	public :
		Weapon();
		~Weapon();
		Weapon(std::string type);
		const std::string&	getType(void);
		void			setType(std::string type);
};
#endif
