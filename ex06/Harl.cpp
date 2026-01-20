/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:27:29 by fmoulin           #+#    #+#             */
/*   Updated: 2026/01/20 17:53:04 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;	
}

int	indexLevel(std::string level, std::string *levels)
{
	for (int i = 0; i < 4; i++)
	{
		if (levels[i].compare(level) == 0)
			return (i);
	}
	return (-1);
}

void	Harl::complain(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	functionPTR handlers[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int	start = indexLevel(level, levels);
	
	switch (start)
	{
		case 0:
			(this->*handlers[0])();
		case 1:
			(this->*handlers[1])();
		case 2:
			(this->*handlers[2])();
		case 3:
			(this->*handlers[3])();
	}
}
