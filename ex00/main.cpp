/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <nrey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 03:29:52 by nrey              #+#    #+#             */
/*   Updated: 2025/06/07 17:38:56 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap ct("estettle :3");
    ClapTrap ct2("fcandia");
    ClapTrap ct3(ct);
    ct3 = ct;

    ct2.attack("La manette de switch en chill valley");
    ct.takeDamage(3);
    ct.beRepaired(1);

    ct3.takeDamage(5);

    return (0);
}
