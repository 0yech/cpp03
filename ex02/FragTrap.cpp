/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <nrey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 19:17:11 by nrey              #+#    #+#             */
/*   Updated: 2025/09/25 02:17:49 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default")
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "Beep Boop, new FragTrap created : " << _name << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "Beep Boop, new FragTrap with given name was created : " << _name << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "Beep Boop, copy constructor called for FragTrap : " << other._name << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "BOOM, DESTROYED FRAGTRAP " << _name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	std::cout << "FragTrap COPIED AND ASSIGNED : " << _name << std::endl;
	return *this;
}

void    FragTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		--_energyPoints;
		std::cout << "FragTrap " << _name << " BOMBS " << target << ", causing " << _attackDamage << " damage points!" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << _name << " can't explode." << std::endl;
	} 
}

void    FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << _name << " wants to High five" << std::endl;
}