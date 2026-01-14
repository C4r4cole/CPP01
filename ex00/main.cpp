/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 10:37:35 by fmoulin           #+#    #+#             */
/*   Updated: 2026/01/14 14:26:29 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	z1("Foo");
	Zombie*	z2;
	
	z1.announce();
	
	z2 = newZombie("Boo");
	z2->announce();
	randomChump("Loo");
	delete z2;
}
