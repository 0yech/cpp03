/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <nrey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 06:51:01 by nrey              #+#    #+#             */
/*   Updated: 2025/06/07 20:15:04 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap default constructor called : " << _name << std::endl;
}

ScavTrap::ScavTrap(const std::string& name)
{
    (void)name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap with given name constructor called : " << _name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "ScavTrap copy constructor called : " << other._name << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called : " << _name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    std::cout << "ScavTrap copy assign operator called : " << _name << std::endl;
    return *this;
}

void    ScavTrap::attack(const std::string& target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        --_energyPoints;
        std::cout << "ScavTrap " << _name << " viciously attacks " << target << ", causing " << _attackDamage << " damage points!" << std::endl;
    }
    else
    {
        std::cout << "ScavTrap " << _name << " can't attack." << std::endl;
    }
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
}