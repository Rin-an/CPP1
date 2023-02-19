/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:49:22 by ssadiki           #+#    #+#             */
/*   Updated: 2023/01/03 03:52:16 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>
# include <new>

class	Zombie{
	std::string	name;
	public :
		Zombie();
		~Zombie();
		void	annouce(void);
		void	setname(std::string name);
};
Zombie* zombieHorde( int N, std::string name );
#endif
