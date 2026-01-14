/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:33:31 by fmoulin           #+#    #+#             */
/*   Updated: 2026/01/14 17:28:56 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _type(NULL)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon& type)
{
	this->_type = &type;
}

void	HumanB::attack(void) const
{
	if (this->_type)
	{
		std::cout	<< this->_name
					<< " attack with their "
					<< this->_type->getType()
					<< std::endl;
	}
	else
	{
		std::cout	<< this->_name
				<< " attack with a plastic duck"
				<< std::endl;
	}
}

