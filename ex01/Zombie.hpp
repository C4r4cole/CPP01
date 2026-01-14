/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 14:50:37 by fmoulin           #+#    #+#             */
/*   Updated: 2026/01/14 15:20:00 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
# include <cstdlib>

class Zombie
{
	private:
		std::string	_name;
	public:
		Zombie();
		~Zombie();
		const	std::string&	getName(void) const;
		void	setName(const std::string& name);
		void	announce(void);
};

// Zombie*	newZombie(std::string name);
// void	randomChump(std::string name);
Zombie*	zombieHorde(int N, std::string name);

#endif