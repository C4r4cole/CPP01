/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:33:28 by fmoulin           #+#    #+#             */
/*   Updated: 2026/01/14 17:28:47 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include "Weapon.hpp"

class Weapon;

class HumanB
{
private:
	std::string	_name;
	Weapon*		_type;
public:
	HumanB(std::string name);
	~HumanB();

	void	setWeapon(Weapon& type);
	void	attack(void) const;
};

#endif