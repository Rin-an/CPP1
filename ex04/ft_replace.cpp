/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:56:25 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/10 13:59:23 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_replace.hpp"

void	find_and_replace(std::string *str, char *s1, char *s2)
{
	int			pos;
	std::string	ns1;

	ns1 = (std::string)s1;
	pos = str->find(s1);
	if (pos >= 0)
	{
		str->erase(pos, ns1.size());
		str->insert(pos, s2);
	}
	str->append("\n");
}

void	ft_replace(char *file, char *s1, char *s2)
{
	std::string		nfile;
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		str;

	nfile.assign(file);
	nfile.append(".replace");
	ifs.open(file);
	ofs.open(nfile);
	if (ifs && ofs)
	{
		while (ifs)
		{
			std::getline(ifs, str);
			find_and_replace(&str, s1, s2);
			ofs << str;
		}
	}
	ifs.close();
	ofs.close();
}
