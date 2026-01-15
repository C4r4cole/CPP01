/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:33:31 by fmoulin           #+#    #+#             */
/*   Updated: 2026/01/15 11:29:29 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack(void) const
{
	if (this->_weapon)
	{
		std::cout	<< this->_name
					<< " attack with their "
					<< this->_weapon->getType()
					<< std::endl;
	}
	else
	{
		std::cout	<< this->_name
				<< " attack with a plastic duck"
				<< std::endl;
	}
}

