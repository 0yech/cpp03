/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <nrey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 03:30:08 by nrey              #+#    #+#             */
/*   Updated: 2025/06/07 17:37:22 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(10)
{
	std::cout << "Default ClapTrap constructor called, new ClapTrap named : " << _name << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(10)
{
	std::cout << "ClapTrap with given name created, new ClapTrap named : " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name), _hitPoints(other._hitPoints), _energyPoints(other._energyPoints), _attackDamage(other._attackDamage)
{
	std::cout << "Copy ClapTrap constructor called, new Copy named : " << _name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destroying ClapTrap named : " << _name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) 
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_attackDamage = other._attackDamage;
		_energyPoints = other._energyPoints;
	}
	std::cout << "ClapTrap Copy Assignement operator called, new copied ClapTrap named : " << _name << std::endl;
	return *this;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		--_energyPoints;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " can't attack." << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount;
	if (_hitPoints < 0)
		_hitPoints = 0;
	std::cout << "ClapTrap " << _name << " takes " << amount << " damage points! HP left : " << _hitPoints << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		--_energyPoints;
		_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " repairs, recovering " << amount << " hit points! HP now : " << _hitPoints << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " can't repair." << std::endl;
	}
}