/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:33:38 by fmoulin           #+#    #+#             */
/*   Updated: 2026/01/14 17:05:21 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& type) : _name(name), _type(type)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack(void) const
{
	std::cout	<< this->_name
				<< " attack with their "
				<< this->_type.getType()
				<< std::endl;
}
