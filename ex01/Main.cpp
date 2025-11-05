/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerner <cgerner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:59:56 by cgerner           #+#    #+#             */
/*   Updated: 2025/07/14 16:37:31 by cgerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie 	*zombies;
	int		N = 5;

	zombies = zombieHorde(N, "Boo");
	for (int i = 0; i < N; i++)
	{
		std::cout << "Number : " << i << " -> ";
		zombies[i].announce();
	}
	delete[](zombies);

	return (0);
}
