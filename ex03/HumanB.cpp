/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerner <cgerner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:39:50 by cgerner           #+#    #+#             */
/*   Updated: 2025/07/15 13:55:47 by cgerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {}

HumanB::~HumanB() {}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack() const
{
	if (_weapon == NULL)
		std::cout << _name << " has no weapon.. he uses his fists ! " << std::endl;
	else
		std::cout << _name << " attacks with their " << (*_weapon).getType() << std::endl;
	return ;
}
