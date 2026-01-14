/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:33:17 by fmoulin           #+#    #+#             */
/*   Updated: 2026/01/14 17:28:23 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include "HumanA.hpp"
# include "HumanB.hpp"

class Weapon
{
private:
	std::string	_type;
public:
	Weapon(std::string type);
	~Weapon();

	const	std::string	getType(void) const;
	void	setType(std::string newType);
};

#endif