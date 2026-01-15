/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 15:02:06 by fmoulin           #+#    #+#             */
/*   Updated: 2026/01/15 17:40:06 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "You must enter 3 parameters" << std::endl;
		std::cout << "The first parameter must be the name of the file" << std::endl;
		return (1);
	}
	std::ifstream	ifs(argv[1]);
	std::string		s1(argv[2]);
	std::string		s2(argv[3]);
	std::string		out = std::string(argv[1]) + ".replace";
	std::ofstream	ofs(out.c_str());
	std::string		line;
	std::string		resultLine;
	size_t			pos;
	
	if (!ifs)
	{
		std::cerr << "Cannot open input file\n";
		return (1);
	}
	if (!ofs)
	{
		std::cerr << "Cannot open output file\n";
		return (1);
	}
	if (s1 == "")
		return (1);
	while (std::getline(ifs, line))
	{
		// fonction pour remplacer s1 par s2
		pos = 0;
		resultLine = "";
		line.find(s1, pos);
		
		ofs << line << "\n";
	}
	ifs.close();
	ofs.close();
	return (0);
}
