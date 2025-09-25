/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <nrey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 03:29:52 by nrey              #+#    #+#             */
/*   Updated: 2025/09/25 02:24:56 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap d1("Dia1");
    DiamondTrap d2("JAKS");
    DiamondTrap d3(d2);

    d3 = d2;
    d1.attack("chill valley");
    d1.whoAmI();

    std::cout << std::endl;

    return (0);
}
