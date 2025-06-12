/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <nrey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 03:29:52 by nrey              #+#    #+#             */
/*   Updated: 2025/06/07 19:37:41 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap ft("estettle :3");
    ft.attack("minirt");
    ft.highFivesGuys();

    std::cout << std::endl;

    ScavTrap st("Filippo");
    st.attack("chill valley");
    st.guardGate();

    std::cout << std::endl;

    return (0);
}
