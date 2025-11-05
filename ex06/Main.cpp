/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerner <cgerner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:41:24 by cgerner           #+#    #+#             */
/*   Updated: 2025/07/16 14:45:28 by cgerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: ./harlFilter <level>" << std::endl;
		return (1);
	}

	Harl harl;

	std::string arg = argv[1];
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"}; //enum possible aussi
	int	numberLevel = -1;
	for (int i = 0; i < 4; i++)
	{
		if (arg == levels[i])
			numberLevel = i;
	}

	switch (numberLevel)
	{
		case 0:
            harl.complain("DEBUG");
			std::cout << std::endl;
			harl.complain("INFO");
			std::cout << std::endl;
			harl.complain("WARNING");
			std::cout << std::endl;
			harl.complain("ERROR");
			std::cout << std::endl;
            break;
        case 1:
            harl.complain("INFO");
			std::cout << std::endl;
			harl.complain("WARNING");
			std::cout << std::endl;
			harl.complain("ERROR");
			std::cout << std::endl;
            break;
        case 2:
            harl.complain("WARNING");
			std::cout << std::endl;
			harl.complain("ERROR");
			std::cout << std::endl;
            break;
        case 3:
            harl.complain("ERROR");
			std::cout << std::endl;
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}