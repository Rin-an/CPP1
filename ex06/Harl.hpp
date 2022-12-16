/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 14:11:45 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/11 15:38:43 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
# include <iostream>
# include <string>

class Harl{
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	int		complain_level(std::string level);
	public :
		Harl(void);
		~Harl(void);
		void	complain(std::string level);
};
#endif
