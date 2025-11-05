/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerner <cgerner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 15:38:27 by cgerner           #+#    #+#             */
/*   Updated: 2025/07/14 13:54:48 by cgerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	first("Pablo");
	Zombie	second("Oz");
	Zombie	third;

	first.announce();
	second.announce();
	third.announce();
	randomChump("Foo");

	std::cout << std::endl;
	Zombie	*alloc;
	Zombie	*bzzz;
	
	alloc = newZombie("alloc");
	bzzz = newZombie("bzzz");
	alloc->announce();
	bzzz->announce();
	delete(alloc);
	delete(bzzz);
	
	std::cout << std::endl;
	return (0);
}
