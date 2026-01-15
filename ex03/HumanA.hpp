/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:33:35 by fmoulin           #+#    #+#             */
/*   Updated: 2026/01/15 11:27:55 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include "Weapon.hpp"

class Weapon;

class HumanA
{
private:
	std::string	_name;
	Weapon&		_weapon;
public:
	HumanA(std::string name, Weapon& type);
	~HumanA();

	void	attack(void) const;
};

#endif