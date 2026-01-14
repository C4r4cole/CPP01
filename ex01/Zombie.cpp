/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 15:01:47 by fmoulin           #+#    #+#             */
/*   Updated: 2026/01/14 15:20:48 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << this->_name << " has been destroyed" << std::endl;
}

const	std::string&	Zombie::getName(void) const
{
	return (_name);
}

void	Zombie::setName(const std::string& name)
{
	_name = name;
}

void	Zombie::announce(void)
{
	std::cout	<< this->_name
				<< ": BraiiiiiiinnnzzzZ..."
				<< std::endl;
}
